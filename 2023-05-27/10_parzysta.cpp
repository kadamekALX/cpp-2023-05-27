//Zadanie:
// Przyjmij liczbę od użytkownika i wypisz, czy ta liczba jest parzysta
#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if (x % 2 == 0) {
        std::cout << "Parzysta!\n";
    }
    else {
        std::cout << "Nieparzysta!\n";
    }
}
