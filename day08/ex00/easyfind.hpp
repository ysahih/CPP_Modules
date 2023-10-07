#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>
int easyfind(const T& a, const int i){
    if (std::find(a.begin(), a.end(), i) != a.end())
            return i;
    throw "no accurrence found!";
}


#endif