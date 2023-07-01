//Napisz program, który przyjmie liczbę N, a następnie:
// - przyjmie N liczb
// - wypisze największą spośród wprowadzonych liczb

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    int maks = 0;
    int licznik = 0;
    while (licznik < n) {
        int liczba;
        std::cin >> liczba;
        if (licznik == 0 || liczba > maks) {
            maks = liczba;
        }
        licznik += 1;
    }
    std::cout << "Najwieksza: " << maks << '\n';
}
