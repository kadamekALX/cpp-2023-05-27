#include <iostream>

void bubblesort(int* tab, unsigned rozmiar) {
    for (unsigned j = 0; j < rozmiar - 1; j += 1) {
        for (unsigned i = 1; i < rozmiar - j; i += 1) {
            if (tab[i - 1] > tab[i]) {
                int tmp = tab[i];
                tab[i] = tab[i - 1];
                tab[i - 1] = tmp;
            }
        }
    }
}

void wypisz(const int* tab, unsigned rozmiar) {
    for (unsigned i = 0; i < rozmiar; i += 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    int tab[8] = {12, 31, 5, 50, 2, 18, 7, 23};
    wypisz(tab, 8);
    bubblesort(tab, 8);
    wypisz(tab, 8);
}
