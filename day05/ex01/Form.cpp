#include "Form.hpp"

Form::Form(): to_sign(), to_exec() {}

Form::~Form() {}

Form::Form(const std::string name, unsigned int sign, unsigned int exec) : _name(name), to_sign(sign), to_exec(exec) {

    if (to_sign > 150 || to_exec > 150)
        throw Form::GradeTooLowException();
    if (to_exec < 1 || to_sign < 1)
		throw Form::GradeTooLowException();
    this->is_signed = false;
}

Form::Form(const Form& copy): _name(copy._name), to_sign(copy.to_sign), to_exec(copy.to_exec)  {

    this->is_signed = copy.is_signed;
}

Form& Form::operator=(const Form& copy) {
	if (this != &copy)
		this->is_signed = copy.is_signed;
	return *this;
}


const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}


std::string Form::getName() {
	return this->_name;
}

unsigned int Form::getGradeToSign() {
	return this->to_sign;
}

unsigned int Form::getGradeToExec() {
	return this->to_exec;
}

void    Form::beSigned(Bureaucrat& b) {

    if (b.getGrade() > this->to_sign)
        throw Form::GradeTooLowException();
    this->is_signed = true;
}

bool Form::isSigned(){
    return this->is_signed;
}

std::ostream& operator<<(std::ostream &o, Form& bureau) {
	
	o << bureau.getName() << ", grade to sign: " << bureau.getGradeToSign();
    o << ", grade to exec: " << bureau.getGradeToExec();
	return o;
}
