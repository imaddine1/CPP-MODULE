#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <exception>

//class Bureaucrat;


class ShrubberyCreationForm : public Form
{
private:
    std::string target;
    class   invalidShrubbery : public std::exception
    {
        const char* what() const throw();
    };
public:
    // OCCF
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& Sh);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& Sh);
    ~ShrubberyCreationForm();
    // param constructor that take target
    ShrubberyCreationForm(std::string target);
    // required function
    void    execute(Bureaucrat const& executor) const;
};


#endif