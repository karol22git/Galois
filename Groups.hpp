#pragma once

namespace galois {
    template<typename T, T(*Operation)(T,T)>
    class Group {
        public:
            Group(T _generator);
            T Addition(T a, T b) const;
            void Show() const;
            Group<T,Operation> Center() const;
            int Order() const;
        private:
            T generator;
    };

    template<typename T, T(*Operation)(T,T)>
    class Semigroup {
        public:
            Semigroup(T generator);
            void Show() const;
            int Order() const;
        private:
            T generator;
    };
}