#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class AForm 
{
    private:
        const std::string _name;
        const unsigned int to_sign;
        const unsigned int to_exec;
        bool  is_signed;

    public:
        AForm();
        AForm(std::string _name, unsigned int sign, unsigned int exec);
        AForm(const AForm& copy);
        AForm& operator=(const AForm& copy);
       ~AForm();
        //getters
        std::string getName()const;
        unsigned int getGradeToSign()const;
        unsigned int getGradeToExec()const;
        bool    isSigned() const;
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
		class FailToExecute: public std::exception {
			public :
				virtual const char* what() const throw();
		};
        //abstract 
        void check_requirements(Bureaucrat const &executor) const;
        virtual void execute(Bureaucrat const& executor) const = 0;
};

std::ostream& operator<<(std::ostream &o, AForm& form);

#endif