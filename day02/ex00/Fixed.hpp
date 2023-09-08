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
	~Fixed();                   //
	Fixed& operator=(const Fixed& fixed); //
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};


#endif