#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
private:
	int	fpoint;
	static const int fractional = 8;
public:
	Fixed();
	Fixed(const int integer);
	Fixed(const float floating);
	Fixed(Fixed const& f);
	Fixed&	operator=(const Fixed& f1);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int			toInt (void) const;
	~Fixed();
	// ADD COMPARAISON OPERATORS
	bool	operator==(const Fixed& f2);
	bool	operator!=(const Fixed& f2);
	bool	operator<(const Fixed& f2) const;
	bool	operator>(const Fixed& f2) const;
	bool	operator<=(const Fixed& f2);
	bool	operator>=(const Fixed& f2);

	// ADD ARITHMETIC OPERATORS
	Fixed	operator+(const Fixed& f2);
	Fixed	operator-(const Fixed& f2);
	Fixed	operator*(const Fixed& f2);
	Fixed	operator/(const Fixed& f2);

	// ADD UNARY OPERATORS OF (++, --)

	Fixed&	operator++(void);
	Fixed&	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	// overload memeber function
	static Fixed& min(Fixed& f1, Fixed& f2);
	static const Fixed& min(const Fixed& f1, const Fixed& f2);
	static Fixed& max(Fixed& f1, Fixed& f2);
	static const Fixed& max(const Fixed& f1, const Fixed& f2);
};
std::ostream&	operator<< (std::ostream &os, const Fixed  &obj);


#endif