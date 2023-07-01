// Przyjmij liczbę i wypisz, czy mieści się ona w przedziale [10; 20)

#include <iostream>

int main() {
    int liczba;
    std::cin >> liczba;
    if (liczba >= 10) {
        if (liczba < 20) {
            std::cout << "W przedziale\n";
        }
    }
}
