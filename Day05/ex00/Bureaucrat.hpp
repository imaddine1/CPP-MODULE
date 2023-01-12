#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>


class Bureaucrat 
{
    private:
        std::string name;
        short       grade;
    public:
    class GradeTooHighException : public std::exception
    {
    public:
    //GradeTooHighException() nested class
    const char* what() const throw()
    {
        return ("this grade too high\n");
    }
    };
    //GradeTooLowException nested class
    class GradeTooLowException : public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("this grade too low\n");
        }
    };
        // OCCF
    Bureaucrat();
    Bureaucrat(const Bureaucrat& B);
    const Bureaucrat& operator=(const Bureaucrat& B);
    ~Bureaucrat();
    // Required Function
    Bureaucrat(std::string _name, long long _grade);
    std::string getName() const;
    short       getGrade() const;
    void        increment();
    void        decrement();
    //add function to test is grade valid
    void        check_grade();
        //Excecption
};
// operator overloading of insertion
std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);



#endif
