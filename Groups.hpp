#pragma once
#include "AlgebraicConcepts.hpp"
#include <iostream>

namespace galois {
    template<typename T, T(*Operation)(T,T)>
    class Group {
    public:
        Group(T _generator) : generator(_generator) {}
        T Addition(T a, T b) const {
            return Operation(a, b);
        }
        void Show() const {
            auto step = generator;
            std::cout<<T()<<" ";
            while(step != T()) { 
                std::cout << step << " ";
                step = Operation(step, generator);
            }
            std::cout << std::endl;
        }
        Group<T, Operation> Center() const {
            return Group<T, Operation>(generator);
        }
        int Order() const {
            auto step = generator;
            int order = 1;
            while(step != T()) {
                ++order;
                step = Operation(step, generator);
            }
            return order;
        }
    private:
        T generator;
    };
}