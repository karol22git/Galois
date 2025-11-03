#pragma once
#include <concepts>
namespace galois {
    template <typename T>
    concept NeutralElement = requires {
        T();
    };

    template <typename T>
    concept InverseElement = requires (T t) {
        {-t} -> std::convertible_to<T>;
    };

    template <typename T>
    concept Finite = std::constructible_from<T, int>;

    template<typename T>
    concept HasModulo = requires(T a, T b) {
        { a % b } -> std::convertible_to<T>;
    };
}