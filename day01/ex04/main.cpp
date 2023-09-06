#include "Replace.hpp"



int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Wrong arguments!" << std::endl;
		return 0;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s2.find(s1) != std::string::npos)
	{
		std::cout << "string s1 occurs in s2" << std::endl;
		return 0;
	}
	Replace r(filename);
	r.replace(s1, s2);
	return 0;
}