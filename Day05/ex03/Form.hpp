#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
private:
    const std::string	_name;
    bool 				_signed;
    const				short _gradeTosign;
    const				short _gradeToExec;
    // the nested Class GradeTooHighException
    class GradeTooHighException : public std::exception
    {
        public:
        const char * what() const throw();
    };
    //the nested class GradeTooLowException
    class GradeTooLowException : public std::exception
    {
        public :
        const char * what() const throw();
    };
public:
    // OCCF
    Form();
    Form(const Form& f);
    const Form& operator=(const Form& f);
    virtual ~Form();
    // parametherized constructor
    Form(const std::string, const long long, const long long);

    // Required function
    void    beSigned(const Bureaucrat& b);

    //getter
    const std::string&  get_name() const;
    const bool&         get_signed() const;
    const short&        get_gradeTosign() const;
    const short&        get_gradeToExec() const;

    // Added Ex02
    virtual void    execute(Bureaucrat const& excecutor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const Form& f);


#endif