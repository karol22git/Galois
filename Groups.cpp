#include "Groups.hpp"
#include <iostream>

template <typename T, T (*Operation)(T,T)>
int galois::Group<T,Operation>::Order() const {
    auto step = generator;
    int order = 1;
    while(step != T())  {
        ++order;
        step = Operation(step,generator);
    }
    return order;
}

template <typename T,  T (*Operation)(T,T)>
void galois::Group<T,Operation>::Show() const {
    auto step = generator;
    while(step != T()) { 
        std::cout<<step + generator<<" ";
        step = Operation(step, generator);
    }
    std::cout<<std::endl;
}

template <typename T,  T (*Operation)(T,T)>
galois::Group<T,Operation>::Group(T _generator) : generator(_generator) {}


template <typename T,  T (*Operation)(T,T)>
T galois::Group<T,Operation>::Addition(T a, T b) {
    return Operation(a,b);
}