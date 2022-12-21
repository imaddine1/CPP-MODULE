
#include "Fixed.hpp"

Fixed::Fixed():fpoint(0)
{
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const& f)
{
	//std::cout << "Copy constructor called\n";
	*this = f;
}

Fixed::Fixed(const int integer)
{
	this->fpoint = integer << fractional;
	//std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float floating)
{
	this->fpoint = roundf(floating * (1 << this->fractional));
	//std::cout << "Float constructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& f)
{
	//std::cout << "Copy assigment operator called\n";
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
	//std::cout << "Destructor called\n";
}

// this is the start of ex02

// *********** comparison functions ***************
bool	Fixed::operator==(const Fixed& f2)
{
	return (this->fpoint == f2.fpoint);
}

bool	Fixed::operator!=(const Fixed& f2)
{
	return ( this->fpoint != f2.fpoint);
}

bool 	Fixed::operator<(const Fixed& f2) const
{
	return (this->fpoint < f2.fpoint);
}

bool	Fixed::operator>(const Fixed& f2) const
{
	return (this->fpoint > f2.fpoint);
}

bool	Fixed::operator<=(const Fixed& f2)
{
	return (this->fpoint <= f2.fpoint);
}

bool Fixed::operator>=(const Fixed& f2)
{
	return ( this->fpoint >= f2.fpoint );
}
//***************** arithmetic fucntions ****************

Fixed	Fixed::operator+(const Fixed& f2)
{
	Fixed f;

	f.fpoint = (this->fpoint + f2.fpoint);
	return (f);
}

Fixed	Fixed::operator-(const Fixed& f2)
{
	Fixed f;

	f.fpoint = (this->fpoint - f2.fpoint);
	return (f);
}

Fixed	Fixed::operator*(const Fixed& f2)
{
	Fixed	f;

	f.fpoint = (this->fpoint * f2.fpoint) / (1 << this->fractional);
	std::cout << f.fpoint << std::endl;
	return (f);
}

Fixed	Fixed::operator/(const Fixed& f2)
{
	Fixed f;

	std::cout << (float)this->fpoint / (float)f2.fpoint << std::endl;
	f.fpoint = (this->fpoint  * (1 << this->fractional) / f2.fpoint);
	return (f);
}

// *********** unary function **************

Fixed&	Fixed::operator++(void)
{
	this->fpoint++;
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	this->fpoint--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	f (*this);

	this->fpoint++;
	return (f);
}

Fixed Fixed::operator--(int)
{
	Fixed	f (*this);

	this->fpoint--;
	return (f);
}

// ADD STATIC OVERLOADED MEMEBER FUNCTION

Fixed& Fixed::min(Fixed& f1,  Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

Fixed& Fixed::max(Fixed& f1,  Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	std::cout << "You are using const max\n";
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}
