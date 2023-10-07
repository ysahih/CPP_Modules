#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <iostream>
#include <exception>

template <class T>
class Array{
    private:
        T* arr;
        size_t _size;
    public:
        Array(): arr(NULL), _size(0){}
        Array(unsigned int n): _size(n){
            this->arr = new T[n];
            for (unsigned int i=0; i<n; i++)
                this->arr[i] = 0;
        }
        Array(const Array& copy): arr(NULL){
            *this = copy;
        }
        Array& operator=(const Array& copy){
            if (this->arr)
                delete[] this->arr;
            this->arr = new T[copy._size];
            for (size_t i=0; i<copy._size; i++)
                this->arr[i] = copy.arr[i];
            this->_size = copy._size;
            return *this;
        }
        ~Array(){
            if (this->arr)
                delete [] this->arr;
        }
        T& operator[](unsigned int i){
            if (i > this->_size)
                throw OutOfBounds();
            return this->arr[i];
        }
        size_t size() const{
            return this->_size;
        }
        class OutOfBounds: public std::exception {
            public:
                virtual const char* what() const throw(){
                    return "index is out of range!";
                }
        };
};


#endif