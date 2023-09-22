#include "Bureaucrat.hpp"
#include <unistd.h>

int main() {

    try {

        Bureaucrat a("ucef", 150);
        // std::cout << a << std::endl;;
        a.boost();
        a.decline();
        a.decline();
        a.boost();
    }
    
    catch (std::exception &e) 
    {
        std::cout << e.what()<<std::endl;;
    }
}