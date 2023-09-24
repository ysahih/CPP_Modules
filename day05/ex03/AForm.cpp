#include "AForm.hpp"

AForm::AForm(): to_sign(), to_exec() {}

AForm::~AForm() {}


AForm::AForm(const std::string name, unsigned int sign, unsigned int exec) : _name(name), to_sign(sign), to_exec(exec) {

    if (to_sign > 150 || to_exec > 150)
        throw AForm::GradeTooLowException();
    if (to_exec < 1 || to_sign < 1)
		throw AForm::GradeTooLowException();
    this->is_signed = false;
}

AForm::AForm(const AForm& copy): _name(copy._name), to_sign(copy.to_sign), to_exec(copy.to_exec)  {

    this->is_signed = copy.is_signed;
}

AForm& AForm::operator=(const AForm& copy) {
	if (this != &copy)
		this->is_signed = copy.is_signed;
	return *this;
}


const char* AForm::FailToExecute::what() const throw() {
	return "Form isn't signed or/and grade is too low.";
}

const char* AForm::GradeTooHighException::what() const throw() {
	return "Grade is too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}


std::string AForm::getName() const{
	return this->_name;
}

unsigned int AForm::getGradeToSign() const{
	return this->to_sign;
}

unsigned int AForm::getGradeToExec() const{
	return this->to_exec;
}

void    AForm::beSigned(Bureaucrat & b) {

    if (b.getGrade() > this->to_sign)
        throw AForm::GradeTooLowException();
    this->is_signed = true;
}

bool AForm::isSigned() const{
    return this->is_signed;
}

std::ostream& operator<<(std::ostream &o, AForm& bureau) {
	
	o << bureau.getName() << ", grade to sign: " << bureau.getGradeToSign();
    o << ", grade to exec: " << bureau.getGradeToExec();
	return o;
}

void AForm::check_requirements(Bureaucrat const & executor) const{

	if (!this->isSigned() || executor.getGrade() > this->to_exec)
		throw AForm::FailToExecute();
}
