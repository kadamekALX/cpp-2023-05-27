// Przyjmij 2 liczby N i K, a następnie wypisz, czy N jest podzielnie przez K.
// Nie dzielimy przez 0!
#include <iostream>

int main() {
    int x;
    int y;
    std::cin >> x >> y;
    if (y == 0) {
        std::cout << "Nie dziel przez 0!\n";
    }
    else {
        if (x % y == 0) {
            std::cout << "Podzielne!\n";
        }
        else {
            std::cout << "Niepodzielne!\n";
        }
    }
}
