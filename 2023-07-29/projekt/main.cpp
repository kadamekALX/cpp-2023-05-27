#include <iostream>
#include "potegowanie.hpp"





// Kompilacja składa się z 4 etapów:
// I. preprocessing - flaga -E zatrzymuje Kompilacje po tym etapie
// II. kompilacja - zamiana kodu na kod asemblera - flaga -S
// III. asemblacja - zamiana asemblera na kod maszynowy - flaga -c
// IV. linkowanie
// int main() {
// #ifdef KULTURA
//     std::cout << "Hello world!\n";
// #else
//     std::cout << "Elo, mordo!\n";
// #endif
// }



int main() {
//     Tablica<int> tab;
    int x;
    int y;
    std::cin >> x >> y;
    int z = potegowanie(x, y);
    std::cout << "wynik potegowania = " << z << '\n';
}
