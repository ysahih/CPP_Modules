#include "iter.hpp"

template<typename T>
void print(T element) {
    std::cout << element << " | ";
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    ::iter(intArray, 5, ::print<int>);
    std::cout << std::endl;

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    iter(doubleArray, 5, print<double>);
    std::cout << std::endl;

    return 0;
}
