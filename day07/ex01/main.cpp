#include "iter.hpp"



int main() {
    int a[] = {1, 2, 3, 4, 5};
    ::iter(a, 5, ::print<int>);
    std::cout << std::endl;

    double d[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    iter(d, 5, print<double>);
    std::cout << std::endl;

    return 0;
}
