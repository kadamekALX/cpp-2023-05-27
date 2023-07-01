// Napisz funkcję, która przyjmie współrzędne skoczka (koń) na szachownicy i zwróci
// liczbę mówiącą na ile różnych pól może on przeksoczyć w 1 ruchu.
// Zakładamy, że reszta szachownicy jest pusta.
// Poprawne wspolrzedne: 0-7
#include <iostream>

// bool czy_na_planszy(int x, int y) {
//     return x >= 0 && x < 8 && y >= 0 && y < 8;
// }

bool czy_na_planszy(unsigned x, unsigned y) {
    return x < 8 && y < 8;
}

int ile_ruchow(int x, int y) {
    const int fx[8] = {1, -1, 2, 2, 1, -1, -2, -2};
    const int fy[8] = {2, 2, 1, -1, -2, -2, 1, -1};
    int wynik = 0;
    for (unsigned i = 0; i < 8; i += 1) {
        if (czy_na_planszy(x + fx[i], y + fy[i])) {
            wynik += 1;
        }
    }

    return wynik;
}

int main() {
    int x;
    int y;
    std::cin >> x >> y;
    std::cout << ile_ruchow(x, y) << '\n';
}
