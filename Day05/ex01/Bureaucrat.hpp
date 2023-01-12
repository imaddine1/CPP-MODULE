#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat 
{
	private:
		std::string name;
		short       grade;
	public:
	//GradeTooHighException() nested class
	class GradeTooHighException : public std::exception
	{
		public:
		const char* what() const throw();
	};
	//GradeTooLowException nested class
	class GradeTooLowException : public std::exception
	{
		public:
		const char* what() const throw();
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
	// ADDED FOR EX01
	//void	signForm(const Form& f);
};
// operator overloading of insertion
std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);



#endif
