#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Intern 
{
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