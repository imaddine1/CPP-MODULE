#include "Form.hpp"
#include "Bureaucrat.hpp"

// OCCF
Form::Form():_name("Default Form"), _signed(false), _gradeTosign(1), _gradeToExec(1)
{
    std::cout << "Form Defautlt constructor\n";
}

Form::Form(const Form& f):_name(f._name), _signed(f._signed), _gradeTosign(f._gradeTosign), _gradeToExec(f._gradeToExec)
{
    std::cout << "Form Default copy constructor\n";
    *this = f;
}

const Form& Form::operator=(const Form& f)
{
    _signed = f._signed;
    std::cout << "Form assignment operator\n";
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

void    Form::beSigned(Bureaucrat& b)
{
    if (b.getGrade() > _gradeTosign)
        throw Bureaucrat::GradeTooLowException();
    _signed = true;
}

// getter
bool    Form::get_signed()
{
    return (_signed);
}

std::string Form::get_name() const
{
    return (_name);
}

// parametherized constructor
Form::Form(const std::string name, const long long gradeTosign, const long long gradeToExec): _name(name), _gradeTosign(gradeTosign), _gradeToExec(gradeToExec)
{
    std::cout << "Form param constructor\n";
    if (gradeTosign < 0)
        throw Bureaucrat::GradeTooHighException();
    else if (gradeTosign > 150)
        throw Bureaucrat::GradeTooLowException();
}

// function for ex02
void    Form::execute(Bureaucrat const& executor) const
{
    (void)executor;
    std::cout << "this function will never execute here, ask why\n";
}

short   Form::get_gradeToExec()
{
    return (_gradeToExec);
}