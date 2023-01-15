#include "ShrubberyCreationForm.hpp"

// OCCF
ShrubberyCreationForm::ShrubberyCreationForm():Form("Shrubbery Creation", 145, 137)
{
    std::cout << "Shrubbery Default constructor\n";
    target = "Defuatl Shrubbery";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& Sh)
{
    std::cout << "Shrubbery copy constructor\n";
    *this = Sh;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& Sh)
{
    target = Sh.target;
    std::cout << "Shrubbery assignment operator\n";
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Default Destructor\n";
}
// param constructor that take target
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("Shrubbery Creation", 145, 137)
{
    this->target = target;
    std::cout << "Shrubbery param constructor\n";
}

// Exception
const char* ShrubberyCreationForm::invalidShrubbery::what() const throw()
{
    return ("ther grade of bereaucrat is not high enough to execute it\n");
}

// Added for ex02
void    ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    // two function use this 
    if ( get_signed() == false || executor.getGrade() > get_gradeToExec())
          throw invalidShrubbery();

    std::string tree = target; 
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