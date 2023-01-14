#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class Bureaucrat;


class RobotomyRequestForm : public Form
{
private:
    std::string name;
    short       sign;
    short       exec;
public:
    // OCCF
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& Sh);
    const RobotomyRequestForm& operator=(const RobotomyRequestForm& Sh);
    ~RobotomyRequestForm();
    // param constructor that take target
    RobotomyRequestForm(std::string target);
    // required function
    void    execute(Bureaucrat const& executor) const;
    std::string get_name() const;
};


#endif