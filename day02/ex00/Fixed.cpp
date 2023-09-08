#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed() : fixed_point(0){
    std::cout << "default constructor calld" << std::endl;
}

Fixed::Fixed(const Fixed& fixed){
    std::cout << "copy constructor calld" << std::endl;
    *this = fixed; 
}

Fixed::~Fixed(){
    std::cout << "desructor calld" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point = fixed.getRawBits();
    return (*this);
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point = raw;
}

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}