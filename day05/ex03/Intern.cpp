#include "Intern.hpp"

const char* Intern::FormDoesNotExist::what(void) const  throw() {
    return "Cannot find Form!";
}

Intern::Intern() {}

Intern::Intern(const Intern& copy)
{
    (void)copy;
    return ;
}

Intern &Intern::operator=(const Intern &copy)
{
    (void)copy;
    return (*this);
}

Intern::~Intern(void) {}

AForm *Intern::makeForm(std::string _name, std::string _target)
{
    int i;
    std::string form_names[3] = {"shrubbery creation", "robotomy request", "presidenial pardon"};

    for (i = 0; i < 3; i++){
        if (form_names[i] == _name)
            break;
    }
    switch (i)
    {
        case 0:
            std::cout << "Intern creates " << form_names[0] << std::endl;
            return (new ShrubberyCreationForm(_target));
        case 1:
            std::cout << "Intern creates " << form_names[1] << std::endl;
            return(new RobotomyRequestForm(_target));
        case 2:
            std::cout << "Intern creates " << form_names[2] << std::endl;
            return (new PresidentialPardonForm(_target));
        default:
            throw FormDoesNotExist();
    }

}