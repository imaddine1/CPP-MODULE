#include "Bureaucrat.hpp"

// ****************** create orthodox canonical form ****************

Bureaucrat::Bureaucrat():name("Default")
{
    std::cout << "Bureaucrat Default constructor\n";
    grade = 1;
}

Bureaucrat::Bureaucrat(const Bureaucrat& B):name(B.name)
{
    std::cout << "Bureaucrat Copy constructor\n";
    *this = B;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& B)
{
    std::cout << "Bureaucrat assignment operator\n";
    grade = B.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor\n";
}

//************** Required Function ************************

// param constructor
Bureaucrat::Bureaucrat(std::string _name, long long _grade):name(_name), grade(_grade)
{
    std::cout << "Bureaucrat param constructor\n";
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();

}
// gettter
const std::string& Bureaucrat::getName() const
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
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}
// decrementation of grade (150 is the lowest grade)
void    Bureaucrat::decrement()
{
    grade++;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}
// using operator overloading for display data
std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    out << b.getName();
    out << ", bureaucrat grade ";
    out << b.getGrade();
    return (out);
}


//GradeTooHighException() nested class
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("this grade too HIGH\n");
}
//GradeTooLowException nested class
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("this grade too LOW\n");
}

void    Bureaucrat::signForm(Form& f)
{
    try
    {
           f.beSigned(*this);
           std::cout << this->name << " signed " << f.get_name() << std::endl;
    }
    catch(const std::exception&)
    {
         std::cout << this->name << " couldn't sign " << f.get_name() << " because my grade is too tow" << std::endl;
    }
}