#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <unistd.h>

int     main(void)
{
        std::cout <<"\n*** -> output test for the sherubbery <- ***\n" << std::endl;
        {
        try
        {
                Bureaucrat      me("first bureaucrat", 144);
                ShrubberyCreationForm  the_sherub("the_shrub");
                the_sherub.beSigned(me);
                me.signForm(the_sherub);
                me.executeForm(the_sherub);
        }
        catch (std::exception const &error)
        {
                std::cout << "Error: " << error.what() << std::endl;
                // return (1);
        }
        }
        std::cout <<  "\n*** -> output test for the Roboto <- ***\n" << std::endl;
        {
        try
        {
                Bureaucrat      me("second bureaucrat", 35);
                RobotomyRequestForm     the_roboto("the_robot");
                the_roboto.beSigned(me);
                me.signForm(the_roboto);
                me.executeForm(the_roboto);
        }
        catch (std::exception const &error)
        {
                std::cout << "Error: " << error.what() << std::endl;
                // return (1);
        }
        }
        std::cout << "\n*** -> output test for the President <- ***\n" << std::endl;
        {
        try
        {
                Bureaucrat      me("third bureaucrat", 4);
                PresidentialPardonForm the_president("the_president");
                the_president.beSigned(me);
                me.signForm(the_president);
                me.executeForm(the_president);
        }
        catch (std::exception const &error)
        {
                std::cout << "Error: " << error.what() << std::endl;
                // return (1);
        }
        }
        return (0);
}