
#include "Fixed.hpp"

Fixed::Fixed():fpoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const& f)
{
	std::cout << "Copy constructor called\n";
	*this = f;
}

Fixed::Fixed(const int integer)
{
	this->fpoint = integer << fractional;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float floating)
{
	this->fpoint = roundf(floating * (1 << this->fractional));
	std::cout << "Float constructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assigment operator called\n";
	fpoint = f.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called\n";
	return (fpoint);
}

void 	Fixed::setRawBits(int const raw)
{
	fpoint = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)fpoint / (float)(1 << fractional));
}

int		Fixed::toInt(void) const
{
	return (fpoint >> fractional);
}

std::ostream& operator<< (std::ostream& os, const Fixed &obj)
{	
	os << obj.toFloat();
	return os;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
