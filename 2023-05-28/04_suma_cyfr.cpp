//Przyjmij liczbę i wypisz jej sumę cyfr.
//Dla liczby 1234 odpowiedzią jest 10, bo 1+2+3+4 = 10
#include <iostream>

int main() {
    int n;
    std::cin >> n;
//     std::cout << "Jednosci: " << n % 10 << '\n';
//     n = n / 10; //1234 -> 123
//     std::cout << "Dziesiatki: " << n % 10 << '\n';
//     n /= 10; //123 -> 12
//     std::cout << "Setki: " << n % 10 << '\n';
    int suma = 0;
    while (n != 0) {
        int jednosci = n % 10;
        suma += jednosci;
//         std::cout << jednosci << '\n';
        
        n /= 10;
    }
    std::cout << "Suma cyfr = " << suma << '\n';
}
