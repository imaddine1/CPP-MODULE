#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class Bureaucrat;


class RobotomyRequestForm : public Form
{
private:
    std::string target;
    class   invalidRobot : public std::exception
    {
        const char* what() const throw();
    };
public:
    // OCCF
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& Sh);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& Sh);
    ~RobotomyRequestForm();
    // param constructor that take target
    RobotomyRequestForm(std::string target);
    // required function
    void    execute(Bureaucrat const& executor) const;
};


#endif