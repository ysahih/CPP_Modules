#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private :
	int fixed_point;
	static const int fractional_bits;

public :
	Fixed();                    //default constructor
	Fixed(const Fixed& fixed);  // copy
	Fixed(const int Value);
	Fixed(const float Value);
	~Fixed();                   //
	Fixed& operator=(const Fixed& fixed); //
	float toFloat() const;
	int toInt() const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed); //


#endif