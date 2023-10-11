#include "RPN.hpp"

//: "+ - / *"

int main(int ac, char**av)
{
	double res;
	if (ac != 2) {
		std::cout << "wrong arguments!" << std::endl;
		return 1;
	}
	try{
		res = calculateRNP(av[1]);
		std::cout << res << std::endl;
	}	catch(const char* s){ std::cout << s << std::endl; }

}