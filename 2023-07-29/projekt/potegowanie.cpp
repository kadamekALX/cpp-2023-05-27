#include "potegowanie.hpp"

#include <iostream>

int potegowanie(int a, unsigned b) {
    std::cout << "Uwaga, poteguje!\n";
    int wynik = 1;
    for (int i = 0; i < b; i += 1) {
        wynik *= a;
    }
    return wynik;
}

void JakasKlasa::metoda() const {
    
}
