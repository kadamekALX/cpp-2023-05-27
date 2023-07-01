//Napisz program, który przyjmie liczbę N, a następnie:
// - przyjmie N liczb
// - wypisze największą spośród wprowadzonych liczb

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    int maks = 0;
    std::cin >> maks;
    int licznik = 1;
    while (licznik < n) {
        int liczba;
        std::cin >> liczba;
        if (liczba > maks) {
            maks = liczba;
        }
        licznik += 1;
    }
    std::cout << "Najwieksza: " << maks << '\n';
}
