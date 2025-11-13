
namespace galois {
    template<typename T, T (*Addition)(T,T), T(*Multiplication)(T,T)>
    class Field {
        public:
            Field();
            int Characteristics() const;
            int Order() const;
    };
    template<typename T, template <T, T (*Addition)(T,T)> class G, template <T, T(*Multiplication)(T,T)> class U>
    class FieldG {

    };
}