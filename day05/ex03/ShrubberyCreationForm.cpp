#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("shrubbery creation", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("shrubbery creation", 145, 137), _target(target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {

    this->_target = copy._target;
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): AForm(copy) {

    this->_target = copy._target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{

    std::ofstream file;
    this->check_requirements(executor);
    file.open(this->_target + "_shrubbery");
    if (!file.is_open()) {
        std::cerr << "error : can't open " << this->_target << "_shrubbery file" << std::endl;
        return ;
    }
    file << "                      ___  "               << std::endl;
    file << "                _,-'\"\"   \"\" "          << std::endl;
    file << "             ,-'          __,,--   "       << std::endl;
    file << "           ,'    __,--\"\"\"\"dF      )"   << std::endl;
    file << "          /   .-\"Yb_,--\"\"dF      /"     << std::endl;
    file << "        ,'       _Yb ___dF\"-._,-'"        << std::endl;
    file << "      ,'      _,-\"\"\"\"   \"\"--..__"    << std::endl;
    file << "     (     ,-'                  `."        << std::endl;
    file << "      `._,'     _   _             ;"       << std::endl;
    file << "       ,'     ,' `-'Yb-.___..._,-'"        << std::endl;
    file << "       \\    ,'\"Yb.-'YY`-.dYF\""          << std::endl;
    file << "        `--'   \"Yb  YY  dF\""             << std::endl;
    file << "                \"Yb YY dF"                << std::endl;
    file << "                 \"YbYYdF"                 << std::endl;
    file << "                  |YYYF"                   << std::endl;
    file << "                  |YYY|"                   << std::endl;
    file << "                  |YYY|"                   << std::endl;
    file << "                  |YYY|"                   << std::endl;
    file << "                  |YYY|"                   << std::endl;
    file << "                  dYYYb"                   << std::endl;
    file << "                .dFd|bYb.                o"<< std::endl;
    file << "         o    .dYFdY|YbTYb.            o /"<< std::endl;
    file << "\\  Y  |  \\__,dYYFdYY|YYYoYYb.__byUcefY"  << std::endl;
    file << "##########################################"<< std::endl;
}
