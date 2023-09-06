#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <unistd.h>
#include <iostream>
#include <fstream>
#include <string>

class Replace {
private:
    std::ifstream oldFile;
	std::ofstream newFile;
public:
    Replace ( std::string filename );
    ~Replace (void);
    void replace( std::string s1, std::string s2 );
};



#endif