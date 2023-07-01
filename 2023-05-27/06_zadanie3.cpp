//Zadanie 3.
// Przyjmij liczbę od użytkownika i wypisz jej cyfrę jedności.

#include <iostream>

int main() {
    int x;
    std::cin >> x;
    std::cout << "Cyfra jednosci: " << x % 10 << '\n';
    
    std::cout << "Cyfra dziesiatek: " << x / 10 % 10 << '\n';
    
    std::cout << "x = " << x << '\n';
    std::cout << "x / 10 = " << x / 10 << '\n';
    
    std::cout << 2 + 2 * 2 << '\n';
    std::cout << (2 + 2) * 2 << '\n';
}
