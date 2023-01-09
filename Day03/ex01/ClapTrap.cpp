#include "ClapTrap.hpp"

// orthodox canonical class form

ClapTrap::ClapTrap():Hit(10),Energy(10),Attack_Damage(0)
{
	this->name = "Xmen";
	std::cout << "ClapTrap Default constructor is called\n";
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClaptTrap Copy constructor is called\n";
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
	std::cout << "ClaptTrap Default Destructor is called\n";
}

// The required function

ClapTrap::ClapTrap(std::string _name):name(_name),Hit(10),Energy(10),Attack_Damage(0)
{
	std::cout << "ClaptTrap paramethrized constructor is called\n";
	//this->name = name;
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
	if (amount > Hit)
		amount = Hit;
	std::cout << "im hit and i lose " << amount << " of points\n";
	if (amount > this->Hit)
		this->Hit = 0;
	else
		this->Hit -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned long long int total = (unsigned long long int)amount + (unsigned long long int)Hit;
	if (Energy > 0)
	{
		std::cout << "repaire button is clicked\n";
		if (total > 100)
			Hit = 100;
		else
			Hit += amount;
		Energy--;
	}
	else
		std::cout << "i can't repair cause im run out of my energy\n";
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