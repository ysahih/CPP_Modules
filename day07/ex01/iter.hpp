#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

// template<typename T>
// void print(T e) {
//     std::cout << e << " | ";
// }

template <class T, class F>
void iter(T* a, size_t len, F fun){
    for (size_t i=0; i<len; i++){
        fun(a[i]);
    }
}

#endif