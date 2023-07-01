#include <iostream>

void wypisz2(int* t) {
    std::cout << t[0] << ' ' << t[1] << '\n';
}

//const int* oznacza wskaznik na pamięć, której nie możemy modyfikować
void wypisz(const int* t, unsigned rozmiar) {
    for (unsigned i = 0; i < rozmiar; i += 1) {
        std::cout << t[i] << ' ';
    }
    std::cout << '\n';
//     t[1] = 123; //błąd, bo t jest typu const int*
}

int main() {
    int tab[3] = {10, 20, 30};
    std::cout << &tab[1] << '\n';
    
    std::cout << tab << '\n';
    std::cout << &tab[0] << '\n';
    
    std::cout << tab + 1 << '\n'; //tab + 1 przesuwa wskaznik o sizeof(int) bajtów
    
//     tab[i] == *(tab + i)
    wypisz2(tab);
    wypisz2(tab + 1);
    
    wypisz(tab, 3);
    wypisz(tab, 3);
}
