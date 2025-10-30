

namespace galois {
    template<typename T, T(*Operation)(T,T)>
    class Group {
        public:
        Group(T generator);
        T Addition(T a, T b);
        void Show() const;
        Group<T> Center() const;

        private:
            T generator;
    };

    int Modulo5(int a, int b) {
        return (a+b) %5;
    }
}