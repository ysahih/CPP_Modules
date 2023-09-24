#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    public:
        Intern();
        Intern(const Intern& copy);
        Intern& operator=(const Intern& copy);
        ~Intern();
        class FormDoesNotExist: public std::exception {
            public :
				virtual const char* what() const throw();
        };
        AForm* makeForm(std::string _name, std::string _target);
};


#endif