#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat() {}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name) {

	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy._name), _grade(copy._grade)  {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy) {
	if (this != &copy)
		this->_grade = copy._grade;
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low!";
}

std::string Bureaucrat::getName() {
	return this->_name;
}

unsigned int Bureaucrat::getGrade() {
	return this->_grade;
}

void Bureaucrat::boost() {
	if (this->_grade > 1)
		this->_grade--;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decline() {
	if (this->_grade < 150)
		this->_grade++;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &o, Bureaucrat& bureau) {
	
	o << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
	return o;
}

void Bureaucrat::signForm(Form& form){
	if (form.isSigned())
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else {
		std::cout << this->_name << " couldn’t sign " << form.getName() << " because ";
		throw GradeTooLowException();
	}

}
