// napisz funkcje
// int ile_dzielnikow(int n)
// która zwraca liczbę dzielników liczby n
// dla 12 wynikiem jest 6 (1,2,3,4,6,12)

#include <iostream>

bool czy_podzielne(int n, int k) {
    return n % k == 0;
}

int ile_dzielnikow(int n) {
    int wynik = 0;
    for (int i = 1; i <= n; i += 1) {
        if (czy_podzielne(n, i))
            wynik += 1;
    }
    return wynik;
}

int main() {
    int x;
    std::cin >> x;
    std::cout << "Liczba " << x << " posiada " << ile_dzielnikow(x) << " dzielnikow.\n";
}
