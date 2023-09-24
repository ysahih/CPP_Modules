#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(): AForm("robotomy request", 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("robotomy request", 72, 45), _target(target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {

    this->_target = copy._target;
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy): AForm(copy) {

    this->_target = copy._target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{

    this->check_requirements(executor);
    std::cout << "-> Some Drilling Noises <-" << std::endl;
    if (rand() % 2)
        std::cout << this->_target << " has been robotomized successfully." << std::endl;
    else
        std::cout << this->_target << " failed to robotomize!" << std::endl;

}