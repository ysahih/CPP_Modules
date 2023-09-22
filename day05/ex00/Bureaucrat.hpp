#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <ostream>
		

class Bureaucrat  {
	private:
		const std::string _name;
		unsigned int _grade;
		Bureaucrat();
	public:
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);
		~Bureaucrat();
		std::string getName();
		unsigned int getGrade();
		void boost();
		void decline();
		class here: public std::exception {
			
		};
		class GradeTooLowException: public std::exception {
			public :
				virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception {
			public :
				virtual const char* what() const throw();
		};
} ;

std::ostream& operator<<(std::ostream &o, Bureaucrat& bureau);

#endif


/*Any attempt to instantiate a Bureaucrat using an invalid grade must throw an ex-
ception:
either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.*/

/*You will provide getters for both these attributes: getName() and getGrade(). Im-
plement also two member functions to increment or decrement the bureaucrat grade. If
the grade is out of range, both of them will throw the same exceptions as the constructor.*/