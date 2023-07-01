//przyjmij od użytkownika 3 liczby i wypisz największą z nich
#include <iostream>

int main() {
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;
    
    int max = a;
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    std::cout << "Najwieksza wartosc: " << max << '\n';
    
//     if (a > b) {
//         // a > b, więc porownujemy a i c
//         if (a > c) {
//             std::cout << a << '\n';
//         }
//         else {
//             std::cout << c << '\n';
//         }
//     }
//     else {
//         // b >= a, wiec porownujemy b i c
//         if (b > c) {
//             std::cout << b << '\n';
//         }
//         else {
//             std::cout << c << '\n';
//         }
//     }
}
