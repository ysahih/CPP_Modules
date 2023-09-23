
#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5){}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy) {

    this->_target = copy._target;
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy): AForm(copy) {

    this->_target = copy._target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{

    this->check_requirements(executor);
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}