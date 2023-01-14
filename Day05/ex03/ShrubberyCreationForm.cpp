#include "ShrubberyCreationForm.hpp"

// OCCF
ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Shrubbery Default constructor\n";
    name = "Defuatl Shrubbery";
    sign = 1;
    exec = 1;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& Sh)
{
    std::cout << "Shrubbery copy constructor\n";
    *this = Sh;
}
const ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& Sh)
{
    std::cout << "Shrubbery assignment operator\n";
    sign = Sh.sign;
    exec = Sh.exec;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Default Destructor\n";
}
// param constructor that take target
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
    std::cout << "Shrubbery param constructor\n";
    name = target;
    sign = 145;
    exec = 137;
}
//getter
std::string ShrubberyCreationForm::get_name() const
{
    return (name);
}

void    ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > exec || executor.getGrade() > sign)
          throw 1;

    std::string tree = name; 
    std::fstream file;
    
    tree += "_shrubbery";
    file.open(tree, std::ios::out);
    file << "               ,@@@@@@@,\n"
       ",,,.   ,@@@@@@/@@,  .oo8888o.\n"
    ",&%%&%&&%,@@@@@/@@@@@@,8888/88/8o\n"
   ",%&/%&&%&&%,@@@/@@@/@@@88/88888/88'\n"
   "%&&%&%&/%&&%@@/@@/ /@@@88888/88888'\n"
   "%&&%/ %&%%&&@@/ V /@@' `88/8 `/88'\n"
   "`&%/ ` /%&'    |.|        / '|8'\n"
   "    |o|        | |         | |\n"
   "    |.|        | |         | |\n"
    "// ._///_/__/  ,/_//__\\/.  /_//__/_";
    file.close();
}