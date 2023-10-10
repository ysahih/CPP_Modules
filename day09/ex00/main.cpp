#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2){
		std::cout << "error: wrong arguments!" << std::endl;
		return 1;
	}
	std::ifstream input(av[1]);
	if (!input.is_open()){
		std::cout << "error: cant open file." << std::endl;
		return 1;
	}

	std::map<std::string, double> data;
	try{
		data = getDatabase();
	 std::map<std::string, double>::iterator it;
	} catch (const char* s) {
		std::cout << s << std::endl;
		return 1;
	}
	
	try {
		btcExchange(data, input);
	} catch (const char* s) {
		std::cout << s << std::endl;
		return 1;
	}
	return 0;
}
