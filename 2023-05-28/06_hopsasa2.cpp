// Napisz program, który wypisze liczby od 1 do 100, ale:
// Zamiast każdej podzielnej przez 3 wypisze "Hopsasa"
// Zamiast każdej podzielnej przez 5 wypisze "Tralala"
// Zamiast kazdej podzielnej przez 3 i przez 5 wypisze połączenie 2 powyższych napisów

#include <iostream>

int main() {
    int i = 1;
    while (i <= 110) {
        bool czy_wypisac_liczbe = true;
        if (i % 3 == 0) {
            czy_wypisac_liczbe = false;
            std::cout << "Hopsasa";
        }
        
        if (i % 5 == 0) {
            czy_wypisac_liczbe = false;
            std::cout << "Tralala";
        }
        
        if (i % 7 == 0) {
            czy_wypisac_liczbe = false;
            std::cout << "Bum";
        }

        //jeżeli żaden z powyższych warunków nie był prawdziwy
        //to wypisujemy liczbę
        if (czy_wypisac_liczbe) {
            std::cout << i;
        }
        
        std::cout << '\n';
        
        i += 1;
    }
}
