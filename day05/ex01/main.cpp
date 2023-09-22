#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <unistd.h>

int main() {


    try {

        Bureaucrat a("ucef", 100);
        Form f("contra", 100, 100);
        std::cout << a << std::endl;
        // f.beSigned(a);
        a.signForm(f);
    }

    catch (std::exception &e) 
    {
        std::cout << "exception: " << e.what() << std::endl;;
    }
}