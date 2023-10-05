#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void print(T e) {
    std::cout << e << " | ";
}

template <class T>
void iter(T* a, size_t len, void fun(T)){
    for (size_t i=0; i<len; i++){
        fun(a[i]);
    }
}

#endif