//Zadanie:
//przyjmij liczbę i wypisz, czy jest ona większa od 0, mniejsza od 0 czy równa 0.

#include <iostream>

int main() {
    int liczba;
    std::cin >> liczba;
    if (liczba > 0) {
        std::cout << "Wieksza od 0\n";
    }
    else if (liczba < 0) {
        std::cout << "Mniejsza od 0\n";
    }
    else {
        std::cout << "Rowna 0\n";
    }
}
