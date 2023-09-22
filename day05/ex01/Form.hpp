#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form 
{
    private:
        const std::string _name;
        const unsigned int to_sign;
        const unsigned int to_exec;
        bool  is_signed;
        Form();

    public:
        Form(std::string _name, unsigned int sign, unsigned int exec);
        Form(const Form& copy);
        Form& operator=(const Form& copy);
       ~Form();
        //getters
        std::string getName();
        unsigned int getGradeToSign();
        unsigned int getGradeToExec();
        bool    isSigned();
        //member functions
        void beSigned(Bureaucrat& b);
        //exceptions
        class GradeTooLowException: public std::exception {
			public :
				virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception {
			public :
				virtual const char* what() const throw();
		};
};

    std::ostream& operator<<(std::ostream &o, Form& form);

#endif