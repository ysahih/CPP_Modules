
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
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	int toInt() const;
	float toFloat() const;
	Fixed& operator=(const Fixed& fixed); //
	//operators overload;
	bool operator>(const Fixed& fixed) const;
	bool operator<(const Fixed& fixed) const;
	bool operator>=(const Fixed& fixed) const;
	bool operator<=(const Fixed& fixed) const;
	bool operator==(const Fixed& fixed) const;
	bool operator!=(const Fixed& fixed) const;

	Fixed operator*(const Fixed& fixed); //
	Fixed operator+(const Fixed& fixed); //
	Fixed operator-(const Fixed& fixed); //
	Fixed operator/(const Fixed& fixed); //

	Fixed operator--(void);
	Fixed operator--(int);
	Fixed operator++(void);
	Fixed operator++(int);

	static Fixed& min(Fixed &a, Fixed &b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b) ;
	static const Fixed& max(Fixed const& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed); //


#endif