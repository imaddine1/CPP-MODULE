#ifndef __FIXED_HPP__
#define __FIXED_HPP__
#include <iostream>

class Fixed
{
private:
	int	fpoint;
	static const int fractional = 8;
public:
	Fixed();
	Fixed(Fixed& f);
	void	operator=(const Fixed& f1);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	~Fixed();
};



#endif 