#include "Form.hpp"
#include "Bureaucrat.hpp"

// OCCF
Form::Form():_gradeTosign(1), _gradeToExec(1)
{
    _name = "Default Form";
    _signed = false;
    std::cout << "Form Defautlt constructor\n";
}

Form::Form(const Form& f):_gradeTosign(1), _gradeToExec(1)
{
    std::cout << "Form Default copy constructor\n";
    *this = f;
}

const Form& Form::operator=(const Form& f)
{
    std::cout << "Form assignment operator\n";
    _name = f._name;
    _signed = f._signed;
    // constant variable initialized in copy constructor
    return (*this);
}

Form::~Form()
{
    std::cout << "Form Destructor\n";
}

// the nested Class GradeTooHighException
const char* Form::GradeTooHighException::what() const throw()
{
    return ("this grade is Too High\n");
}
    //the nested class GradeTooLowException
const char* Form::GradeTooLowExcetpion::what() const throw()
{
    return ("this grade is Too Low\n");
}

void    Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() >= _gradeTosign)
        _signed = true;
    else
        _signed = false;
}