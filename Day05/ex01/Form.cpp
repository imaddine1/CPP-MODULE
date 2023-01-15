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
const char* Form::GradeTooLowException::what() const throw()
{
    return ("this grade is Too Low\n");
}

void    Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > _gradeTosign)
        throw GradeTooLowException();
    _signed = true;
}

// getter
const std::string&  Form::get_name() const
{
    return (_name);
}
const bool& Form::get_signed() const
{
    return (_signed);
}
const short&    Form::get_gradeTosign() const
{
    return (_gradeTosign);
}
const short&    Form::get_gradeToExec() const
{
    return (_gradeToExec);
}


// parametherized constructor
Form::Form(const std::string name, const long long gradeTosign, const long long gradeToExec): _name(name), _gradeTosign(gradeTosign), _gradeToExec(gradeToExec)
{
    _signed = false;
    std::cout << "Form param constructor\n";
    if (gradeTosign < 0)
        throw GradeTooHighException();
    else if (gradeTosign > 150)
        throw GradeTooLowException();
}

// operator overloading insertion
std::ostream&   operator<<(std::ostream& out, const Form& f)
{
    out << f.get_name();
    out << " " << f.get_signed();
    out << " " << f.get_gradeTosign();
    out << " " << f.get_gradeToExec();
    out << "\n";
    return (out);
}