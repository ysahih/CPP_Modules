#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& copy) {
	*this = copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& copy) {
	(void)copy;
	return *this;
}

std::string impossible_char(std::string literal)
{
	std::string pseudo_literals[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

	for (int i=0; i < 6; i++){
		if (pseudo_literals[i] == literal || pseudo_literals[i] == '+' + literal)
			return "impossible";
	}
	if (!isprint(atoi(literal.c_str())))
		return "Non displayable";
	return "";
}

void ScalarConverter::convert(std::string literal) {

	std::string	c;
	int 	i;
	float	f;
	double	d;


	if (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
	{
		std::cout << "char: " << literal[0] << std::endl;
		std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(literal[0]) << ".0" << std::endl;
		return;
	}
	
	i = atoi(literal.c_str());
	
	if (literal[literal.length() - 1] == 'f') {
		f = atof(literal.c_str());
		d = static_cast<double>(f);
	} else {  
		d = atof(literal.c_str());
		f = static_cast<float>(d);
	}
	c = impossible_char(literal);
	if (c == "impossible") {
		std::cout << "char: "   <<  c << std::endl;
		if (i == 0)
			std::cout << "int: impossible"  << std::endl;
		else
			std::cout << "int: "    << i  << std::endl;
		std::cout << "float: "  <<  f << "f" << std::endl;
		std::cout << "double: " <<  d << std::endl;
		return ;
	} else if (c.empty()) {
		c = static_cast<char>(i);
		c.insert(0, 1, '\'');
		c.push_back('\'');
	}
	std::cout << "char: "   <<  c << std::endl;
	std::cout << "int: "    <<  i << std::endl;
	std::cout << "float: "  <<  f << ".0f" << std::endl;
	std::cout << "double: " <<  d << ".0" << std::endl;

}


