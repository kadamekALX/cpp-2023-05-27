//Napisz funkcję, która przyjmuje jako argument liczbę N i zwraca dynamicznie zaalokowaną tablicę intów rozmiaru N, wypełnioną zerami.

//Napisz funkcję zwalniającą tablicę zaalokowaną przez wywołanie funkcji nowa_tablica()

#include <iostream>
using Tablica = int*; //tworzymy alias dla typu int*

Tablica nowa_tablica(unsigned rozm) {
    int* p = new int[rozm];
    for (unsigned i = 0; i < rozm; i += 1) {
        p[i] = 0;
    }
    return p;
}

void usun_tablice(Tablica tab) {
    delete[] tab;
}

int main() {
    Tablica tab = nowa_tablica(10);
    tab[1] = 1;
    for (unsigned i = 2; i < 10; i += 1) {
        tab[i] = tab[i - 1] + tab[i - 2];
    }
    for (unsigned i = 0; i < 10; i += 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
    usun_tablice(tab);
}
