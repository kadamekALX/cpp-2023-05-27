//przyjmij 10 liczb od użytkownika i wypisz je w odwrotnej kolejności

#include <iostream>

// (***) zrób to samo nie używając tablic ;)
// void przyjmij_i_wypisz(int ile) {
//     if (ile == 0)
//         return;
//     int x;
//     std::cin >> x;
//     przyjmij_i_wypisz(ile - 1);
//     std::cout << x << '\n';
// }

int main() {
    const int N = 10;
    int tab[N];
    
//     przyjmij_i_wypisz(4);
    
    for (int i = 0; i < N; i += 1) {
        std::cin >> tab[i];
    }
    
    for (int i = N - 1; i >= 0; i -= 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
    
    for (int i = 0; i < N; i += 1) {
        std::cout << tab[N - 1 - i] << ' ';
    }
    std::cout << '\n';
}
