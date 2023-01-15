#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>
#include <exception>

class Bureaucrat;


class PresidentialPardonForm : public Form
{
private:
    std::string target;
    class invalidPardon : public std::exception
    {
        const char* what() const throw();
    };
public:
    // OCCF
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm& Sh);
    const PresidentialPardonForm& operator=(const PresidentialPardonForm& Sh);
    ~PresidentialPardonForm();
    // param constructor that take target
    PresidentialPardonForm(std::string target);
    // required function
    void    execute(Bureaucrat const& executor) const;
};


#endif