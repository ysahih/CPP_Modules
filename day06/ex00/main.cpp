#include<iostream>
#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        try{

            ScalarConverter::convert(av[1]);
        }
        catch (char const* s){
            std::cout << s;
        }
    }
    return 0;
}