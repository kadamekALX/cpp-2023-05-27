//Używając pętli for wypisz wszystkie nieujemne (i całkowite) potęgi 2 mniejsze niż 10000000 (10 milionów)
// 1
// 2
// 4
// 8
// 16
// 32
// ...

/* komentarz
komentarz
komentarz
komentarz
*/

#include <iostream>

int main() {
    for (int i = 1; i < 10000000; i *= 2) {
        std::cout << i << '\n';
    }
}
