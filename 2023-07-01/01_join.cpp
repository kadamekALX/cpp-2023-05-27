#include <iostream>

void wypisz(const int* tab, unsigned rozmiar) {
    for (unsigned i = 0; i < rozmiar; i += 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
}

int* polacz(const int* tab1, unsigned rozmiar1, const int* tab2, unsigned rozmiar2) {
    int* wynik = new int[rozmiar1 + rozmiar2];
    unsigned idx = 0;
    for (unsigned i = 0; i < rozmiar1; i += 1) {
        wynik[idx++] = tab1[i];
    }
    for (unsigned i = 0; i < rozmiar2; i += 1) {
        wynik[idx++] = tab2[i];
    }
    return wynik;
}

int main() {
    int tab[4] = {1, 2, 3, 4};
    int tab2[3] = {10, 20, 30};
    int* tab3 = polacz(tab, 4, tab2, 3);
    wypisz(tab, 4);
    wypisz(tab2, 3);
    wypisz(tab3, 4 + 3);
    delete[] tab3;
    
//     int x = 3;
//     std::cout << x++ << '\n';
//     std::cout << x << '\n';
//     std::cout << ++x << '\n';
//     std::cout << x << '\n';
    
}
