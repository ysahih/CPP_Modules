#ifndef PRESIDENTIALPARDON_HPP
#define PRESIDENTIALPARDON_HPP


#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm: public AForm {
    private:
        std::string _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
        ~PresidentialPardonForm();
        //
        void execute(Bureaucrat const & executor) const;

};


#endif