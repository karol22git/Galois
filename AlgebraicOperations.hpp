#pragma once
#include "AlgebraicConcepts.hpp"


namespace galois {
    template <HasModulo T>
    T Modulo5(T a, T b) {
        return (a+b)%5;
    }
    template <HasModulo T, int n>
    T Modulo(T a, T b) {
        return (a+b)%n;
    }
}