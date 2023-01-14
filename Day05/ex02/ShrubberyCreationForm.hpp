#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;


class ShrubberyCreationForm : public Form
{
private:
    std::string name;
    short       sign;
    short       exec;
public:
    // OCCF
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& Sh);
    const ShrubberyCreationForm& operator=(const ShrubberyCreationForm& Sh);
    ~ShrubberyCreationForm();
    // param constructor that take target
    ShrubberyCreationForm(std::string target);
    // required function
    void    execute(Bureaucrat const& executor) const;
    std::string get_name() const;
};


#endif