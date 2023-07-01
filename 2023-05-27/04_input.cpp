#include <iostream>

int main() {
    int zmienna = 0;
    std::cout << "zmienna = " << zmienna << '\n';
    
    std::cout << "Podaj nowa wartosc: ";
    std::cin >> zmienna;
    std::cout << "zmienna = " << zmienna << '\n';
    int a;
    int b;
    std::cin >> a >> b; // przymij najpierw a, potem b
    std::cout << a << ' ' << b;
}

// students.alx.pl/~kadamek/cpp/2023-05-27/
