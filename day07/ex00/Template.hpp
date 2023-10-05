#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>

template <class T>
void swap(T& a, T& b){
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <class T>
T min(T a, T b){
    if (a == b)
        return b;
    return a > b ? b : a;
}

template <class T>
T max(T a, T b){
    if (a == b)
        return b;
    return a > b ? a : b;
}

#endif