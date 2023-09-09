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

Fixed::Fixed(const int Value) {
int fixed_point = Value << fractional_bits;
this->fixed_point = fixed_point;
std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(const float Value) {
	float fixed_point = Value * (float)(1 << fractional_bits);
	this->fixed_point = roundf(fixed_point);
	std::cout << "float constructor called" << std::endl;
}

int	Fixed::toInt(void) const {
	return fixed_point >> fractional_bits;
}

float Fixed::toFloat(void) const {
	return (float)fixed_point / (1 << fractional_bits);
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed) {
	o << fixed.toFloat();
	return o;
}

//
