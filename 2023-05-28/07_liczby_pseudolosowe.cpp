#include <iostream>
#include <cstdlib> //std::rand, std::srand
#include <ctime> //std::time

int main() {
    //std::srand ustawia ziarno generatora liczb losowych
    //std::time(nullptr) zwraca czas w sekundach od 00:00 1-1-1970
    std::srand(std::time(nullptr));
    int x = std::rand();
    std::cout << x << '\n';
    int y = std::rand();
    std::cout << y << '\n';
    std::cout << std::time(nullptr) << '\n';
}

//losowa liczba z przedziału od A do B:
// std::rand() % (B - A + 1) + A
