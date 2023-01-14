#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class Bureaucrat;


class PresidentialPardonForm : public Form
{
private:
    std::string name;
    short       sign;
    short       exec;
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
    std::string get_name() const;
};


#endif