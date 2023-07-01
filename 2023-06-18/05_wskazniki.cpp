#include <iostream>

//argumenty domyślnie są przekazywane przez kopię - funkcja f modyfikuje tylko swoją lokalną zmienną
void f(int x) {
    x = 10;
}

// tutaj jest kopiowany ADRES zmiennej - możemy go użyć do uzyskania dostępu do oryginalnego parametru
void g(int* p) {
    if (p == nullptr)
        return;
    *p = 999;
}

int main() {
    int x = 123;
    
    std::cout << &x << '\n'; // &x zwraca adres zmiennej x
    
    int* wsk = &x; //int* to typ danych przechowujący adres wartości typu int
    
    std::cout << *wsk << '\n'; //Dereferencja: *wsk daje dostęp do wartości pod adresem wsk
    
    *wsk = 220;
    std::cout << x << '\n';
    
    int* pusty = nullptr; // nullptr to wskaznik, który pokazuje na "nic". Nie wolno robić na tym dereferencji

    int** p = &wsk; // wskaźnik na wskaźnik
    
    f(x);
    std::cout << x << '\n';
    g(&x);
    std::cout << x << '\n';
    g(nullptr);
}
