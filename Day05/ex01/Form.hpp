#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
private:
    std::string _name;
    bool        _signed;
    const       short _gradeTosign;
    const       short _gradeToExec;
public:
    // OCCF
    Form();
    Form(const Form& f);
    const Form& operator=(const Form& f);
    ~Form();

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
    void    beSigned(const Bureaucrat& b);
};

std::ostream& operator<<(std::ostream& out, const Form& f);


#endif