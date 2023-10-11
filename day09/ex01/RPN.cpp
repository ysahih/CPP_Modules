#include "RPN.hpp"

bool isOperator(std::string str) {return str == "+" || str == "-" ||str == "*" ||str == "/";}

bool isDigit(std::string str) {
	for (size_t i=0; i < str.length(); i++){
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

double calculateRNP(std::string expresion)
{
	std::stack<double> stack;
	std::stringstream iss(expresion);
	std::string str;

	while (iss >> str)
	{
		if (isDigit(str))
			stack.push(str[0] - '0');
		if (isOperator(str)){
			if (stack.size() < 2)
				throw "Error";
			double a = stack.top();
			stack.pop();
			double b = stack.top();
			stack.pop();
			switch (str[0])
			{
				case '+':
					stack.push(a + b);
					break ;
				case '-':
					stack.push(b - a);
					break ;
				case '/':
					stack.push(a / b);
					break ;
				case '*':
					stack.push(a * b);
					break ;
			}
		}
		else 
			if (!isDigit(str))
				throw "Error";
	}
	return stack.top();
}