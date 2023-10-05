#include<iostream>
#include "Serializer.hpp"

int main ()
{
    static uintptr_t raw;
    Data info;
    info.number = 21;
    info.str = "ucef";


    raw = Serializer::serialize(&info);
    Data *ptr = Serializer::deserialize(raw);
    std::cout << "my name is: " << ptr->str << " i am " << ptr->number << '.' << std::endl;
    return 0;
}