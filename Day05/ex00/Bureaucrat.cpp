#include "Bureaucrat.hpp"

// ****************** create orthodox canonical form ****************

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat Default constructor\n";
    name = "Default";
    grade = 1;
}

Bureaucrat::Bureaucrat(const Bureaucrat& B)
{
    std::cout << "Bureaucrat Copy constructor\n";
    *this = B;
}

const Bureaucrat& Bureaucrat::operator=(const Bureaucrat& B)
{
    std::cout << "Bureaucrat assignment operator\n";
    name = B.name;
    grade = B.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor\n";
}

//************** Required Function ************************

// param constructor
Bureaucrat::Bureaucrat(std::string _name, long long _grade)
{
    std::cout << "Bureaucrat param constructor\n";
    name = _name;
    grade = _grade;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();

}
// gettter
std::string Bureaucrat::getName() const
{
    return (name);
}
//getter
short   Bureaucrat::getGrade() const
{
    return (grade);
}
// incrementation of grade (1 is the higher grade)
void    Bureaucrat::increment()
{
    grade--;
}
// decrementation of grade (150 is the lowest grade)
void    Bureaucrat::decrement()
{
    grade++;
}
// using operator overloading for display data
std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    out << b.getName();
    out << ", bureaucrat grade ";
    out << b.getGrade();
    return (out);
}
// print msg that say grade too high 
// Exception thing

void    Bureaucrat::check_grade()
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    
}

