#include "Span.hpp"

Span::Span(){}

Span::~Span(){}

Span::Span(unsigned int N): _N(N)  {}

Span::Span(const Span& copy){
    *this = copy;
}

Span& Span::operator=(const Span& copy){
    std::set<int>::iterator it;
    for (it = copy._ctr.begin(); it != copy._ctr.end(); it++){
        this->_ctr.insert(*it);
    }
    this->_N = copy._N;
    return *this;
}

void Span::addNumber(int n){
    if (this->_ctr.size() == this->_N)
        throw "container is full!";
    this->_ctr.insert(n);
}

int Span::shortestSpan(){

    if (this->_ctr.size() < 2)
        throw "not enough elements!";
    int span = INT_MAX;
    std::set<int>::iterator tmp1;
    std::set<int>::iterator tmp2;
    tmp1 = tmp2 = this->_ctr.begin();
    tmp2++;
    for( ; tmp2 != this->_ctr.end(); tmp1++, tmp2++){
        if (*tmp2 - *tmp1 < span)
            span = *tmp2 - *tmp1;
    }
    return span;
}

int Span::longestSpan(){

    if (this->_ctr.size() < 2)
        throw "";
    return *--this->_ctr.end() - *this->_ctr.begin();
}