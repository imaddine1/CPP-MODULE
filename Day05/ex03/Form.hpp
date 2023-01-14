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
public:
    // OCCF
    Form();
    Form(const Form& f);
    const Form& operator=(const Form& f);
    virtual ~Form();
    // parametherized constructor
    Form(const std::string, const long long, const long long);
    // the nested Class GradeTooHighException
    class GradeTooHighException : public std::exception
    {
        public:
        const char * what() const throw();
    };
    //the nested class GradeTooLowException
    class GradeTooLowExcetpion : public std::exception
    {
        public :
        const char * what() const throw();
    };

    // Required function
    void    beSigned(Bureaucrat& b);

    //getter
    bool    get_signed();
    virtual    std::string get_name() const;
    // function required from ex02
    virtual void    execute(Bureaucrat const& excecutor) const = 0;

    //additonal function for exercise to work very well
    short   get_gradeToExec();
};

std::ostream& operator<<(std::ostream& out, const Form& f);


#endif