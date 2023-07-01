//Przyjmij 3 liczby całkowite H, M i K.
// H i M oznaczają godzinę (0-23) i minutę (0-59) wyświetlane na zegarze elektronicznym
// Wypisz godzinę, która będzie znajdować się na zegarze po upływie K minut.
//Przykładowe dane:
// 15 24 1 -> 15 25
// 13 50 20 -> 14 10
// 23 59 2 -> 0 1
// 16 31 234 -> 20 25
#include <iostream>

int main() {
    int h;
    int m;
    int k;
    std::cin >> h >> m >> k;
    std::cout << h << ' ' << m << ' ' << k << '\n';
    
    m += k; //to samo co: m = m + k;
//     h = h + m / 60;
    int dodatkowe_h = m / 60;
    h += dodatkowe_h;
    
    m %= 60;
    h %= 24;
    std::cout << h << ' ' << m << '\n';
}
