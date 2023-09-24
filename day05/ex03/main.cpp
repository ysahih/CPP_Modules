#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <unistd.h>

int     main(void)
{
        {
        try
        {
                Bureaucrat      me("second bureaucrat", 150);
                RobotomyRequestForm     the_roboto("the_robot");
                
                Intern someRandomIntern;
                AForm* rrf = someRandomIntern.makeForm("robotomy re quest", "Bender");

                rrf->beSigned(me);
                // me.signForm(&rrf);
                // me.executeForm(&rrf);
        }
        catch (std::exception const &error)
        {
                std::cout << "Error: " << error.what() << std::endl;
                // return (1);
        }
        }

        return (0);
}