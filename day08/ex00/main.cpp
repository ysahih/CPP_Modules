#include "easyfind.hpp"
#include <iostream>
#include <vector>


int main() {
    
    try {
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    int i = 120;
    int j = ::easyfind(numbers, i);

    std::cout << "Found value :" << j<< std::endl;
    } catch (const char* s){
        std::cout << s << std::endl;
    }

    return 0;
}