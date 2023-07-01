// Napisz program, który wypisze liczby od 1 do 100, ale:
// Zamiast każdej podzielnej przez 3 wypisze "Hopsasa"
// Zamiast każdej podzielnej przez 5 wypisze "Tralala"
// Zamiast kazdej podzielnej przez 3 i przez 5 wypisze połączenie 2 powyższych napisów
// 1
// 2
// Hopsasa
// 4
// Tralala
// Hopsasa
// 7
// ...
// 14
// HopsasaTralala
// 16
// ...
#include <iostream>

int main() {
    int i = 1;
    while (i <= 100) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "HopsasaTralala\n";
        }
        else if (i % 3 == 0) {
            std::cout << "Hopsasa\n";
        }
        else if (i % 5 == 0) {
            std::cout << "Tralala\n";
        }
        else {
            std::cout << i << '\n';
        }
        
        i += 1;
    }
}
