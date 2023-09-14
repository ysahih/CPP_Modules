#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal(std::string &type);
        WrongAnimal& operator=(const WrongAnimal& copy);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;

};


#endif