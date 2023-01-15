#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

//class Form;
//class RobotomyRequestForm;

class Intern 
{
	private:
	class  invalidName: public std::exception
	{
		const char* what() const throw()
		{
			return ("the Form name was not found!!\n");
		}
	};
	public:
	// OCCF
	Intern();
	Intern(const Intern& B);
	const Intern& operator=(const Intern& B);
	~Intern();
    // Requiered function
    Form*    makeForm(std::string nameForm, std::string target);
};

#endif