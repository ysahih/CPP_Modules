#include "Replace.hpp"

Replace::Replace(std::string filename) {
	oldFile.open(filename);
	if (!oldFile){
		std::cout << "cannot open file" << std::endl;
		exit(0);
	}
	newFile.open(filename + ".replace");
	if (!newFile){
		std::cout << "cannot open file" << std::endl;
		exit(0);
	}
}

Replace::~Replace() {
	oldFile.close();
	newFile.close();
}

void	Replace::replace(std::string s1, std::string s2){
	std::string line;
	size_t index;
	size_t hold;

	while (true) {
		std::getline(oldFile, line);
		hold = 0;
		while (true) {
			index = line.find(s1, hold);
			if (index == std::string::npos || s1 == "") break;
			else {
				line.erase(index, s1.length());
				line.insert(index, s2);
				hold += s2.length();
			}
			hold += index;
		}
		newFile << line;
		if (oldFile.eof())
			return ;
		newFile << std::endl;
	}
}
