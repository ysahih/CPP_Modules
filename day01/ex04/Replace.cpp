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

	while (true) {
		std::getline(oldFile, line);
		while (true) {
			index = line.find(s1);
			if (index == std::string::npos) break;
			else {
				line.erase(index, s1.length());
				line.insert(index, s2);
			}
		}
		newFile << line << std::endl;
		if (oldFile.eof())
			return ;
	}
}
