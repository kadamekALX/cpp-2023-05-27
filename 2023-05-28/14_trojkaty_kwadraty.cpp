// Przyjmij liczbę N i wypisz:
// 1. Wiersz składający się z N znaków '#'
// 2. Kwadrat NxN składający się ze znaków '#'
// 3. Trójkąt prostokątny o przyprostokątnych dlugości N ze znaków '#'
// Przykłady, dla N = 4:
// 1.
// ####
// 
// 2.
// ####
// ####
// ####
// ####
// 
// 3.
// #
// ##
// ###
// ####

// 4.
// #
// ##
// ###
// ####
// ###
// ##
// #

// 5.
//    #
//   ###
//  #####
// #######

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i += 1) {
        std::cout << '#';
    }
    std::cout << '\n';
    
    std::cout << "-----------------\n";

    for (int wiersz = 0; wiersz < n; wiersz += 1) {
        for (int i = 0; i < n; i += 1) {
            std::cout << '#';
        }
        std::cout << '\n';
    }
    
    std::cout << "-----------------\n";
    // 3.
    
    for (int wiersz = 0; wiersz < n; wiersz += 1) {
        for (int i = 0; i < wiersz + 1; i += 1) {
            std::cout << '#';
        }
        std::cout << '\n';
    }
}
