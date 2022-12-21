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
};
std::ostream&	operator<< (std::ostream &os, const Fixed  &obj);

#endif