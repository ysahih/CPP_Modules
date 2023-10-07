#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <set>

class Span {
    private:
        std::set<int> _ctr;
        unsigned int _N;
        Span();
    public:
        ~Span();
        Span(const Span& copy);
        Span& operator=(const Span& copy);
        Span(unsigned int N);
        void addNumber(int n);
        //
        int shortestSpan();
        int longestSpan();
};



// Span::


#endif
