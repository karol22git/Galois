#include "AlgebraicConcepts.hpp"


namespace galois {
    template <HasModulo T>
    T Modulo5(T a, T b) {
        return (a+b)%5;
    }
}