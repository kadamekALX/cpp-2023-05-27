// napisz funkcję, która przyjmie 2 inty i zwroci większy z nich
#include <iostream>

// int maks(int a, int b) {
//     if (a > b)
//         return a;
//     return b;
// }
// 
// double maks(double a, double b) {
//     if (a > b)
//         return a;
//     return b;
// }
// 
// char maks(char a, char b) {
//     if (a > b)
//         return a;
//     return b;
// }

template <typename Typ>
Typ maks(Typ a, Typ b) {
    if (a > b)
        return a;
    return b;
}


int main() {
    std::cout << maks(13, 6) << '\n'; // dedukcja typów - podaliśmy 2 inty, więc `Typ` musi być intem
    std::cout << maks(13.9, 6.6) << '\n';
    std::cout << maks('A', 'B') << '\n';
    std::cout << maks<double>(13, 15.7) << '\n'; // sami wskazujemy, że chcemy wywołać wersję dla typu double, więc dedukcja nie ma miejsca
    
}
