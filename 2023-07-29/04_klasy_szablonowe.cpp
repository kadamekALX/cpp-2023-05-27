#include <iostream>
#include <string>

template <typename T>
class Pudelko {
public:
    void setZawartosc(T x);
    T getZawartosc() const;
private:
    T zawartosc;
};

template <typename T>
void Pudelko<T>::setZawartosc(T x) {
    zawartosc = x;
}

template <typename T>
T Pudelko<T>::getZawartosc() const {
    return zawartosc;
}

int main() {
    Pudelko<int> p;
    p.setZawartosc(15);
    std::cout << p.getZawartosc() << '\n';
    
    Pudelko<std::string> s;
    s.setZawartosc("ala ma kota");
    std::cout << s.getZawartosc() << '\n';
}
