#include "Fixed.hpp"

Fixed::Fixed():fpoint(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed& f)
{
	std::cout << "Copy constructor called\n";
	*this = f;
}

void	Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assigment operator called\n";
	fpoint = f.getRawBits();
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (fpoint);
}

void 	Fixed::setRawBits(int const raw)
{
	fpoint = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
