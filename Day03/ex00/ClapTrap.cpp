#include "ClapTrap.hpp"

// default function of class

ClapTrap::ClapTrap()
{
	this->name = "Unknown";
	this->Hit = 10;
	this->Energy = 10;
	this->Attack_Damage = 0;
	std::cout << "Default constructor is called\n";
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Copy constructor is called\n";
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
{
	this->name = clap.name;
	this->Hit = clap.Hit;
	this->Energy = clap.Energy;
	this->Attack_Damage = clap.Attack_Damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default Destructor is called\n";
}

// The required function

ClapTrap::ClapTrap(std::string name):Hit(10),Energy(10),Attack_Damage(5)
{
	std::cout << "the parametherized constructor with name is called\n";
	this->name = name;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->Hit == 0 || this->Energy == 0)
	{
		std::cout << "i can't attack " << target << " cause i don't have either energy or hit points\n";
	}
	else
	{	
		std::cout << "ClapTrap " + this->name << " attacks " << target 
		<< " causing " << this->Attack_Damage << " points of damage\n";
		this->Energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "im hit and i lose " << amount << " of points\n";
	if (amount > this->Hit)
		this->Hit = 0;
	else
		this->Hit -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "repaire button is clicked\n";
	this->Hit += amount;
	this->Energy--;
}
// optional funtion for test
std::string ClapTrap::get_points() const
{
	std::string info;

	info = "Hit == " + std::to_string(this->Hit);
	info += "\nEnergey == "+ std::to_string(this->Energy);
	info += "\nAttack == "+ std::to_string(this->Attack_Damage) + "\n";
	return (info);
}