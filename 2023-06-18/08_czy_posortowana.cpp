//napisz funkcję czy_posortowana(), która sprawdzi, czy przekazana tablica jest posortowana rosnąco

#include <iostream>

bool czy_posortowana(const int* t, unsigned rozm) {
    if (rozm == 0) //specjalny przypadek - dla rozm==0 pętla poniżej będzie wykonywała się 2^32-1 razy
        return true;
//     dla każdej pary sąsiadujących elementów sprawdzić czy element po lewej jest mniejszy
    for (unsigned i = 0; i < rozm - 1; i += 1) {
        //sprawdzamy czy nie istnieje para, w której element po lewej nie jest mniejszy
        if (t[i] >= t[i + 1])
            return false;
    }
    return true;
}

int main() {
    int tab[5] = {5, 1, 2, 3, 4};
    int tab2[7] = {1, 2, 3, 0, 5, 6, 7};
    
    std::cout << czy_posortowana(tab, 5) << '\n'; //false
    std::cout << czy_posortowana(tab2, 7) << '\n'; //false
    std::cout << czy_posortowana(tab2, 3) << '\n'; //true
    std::cout << czy_posortowana(tab + 1, 4) << '\n'; //true
    std::cout << czy_posortowana(tab2 + 3, 4) << '\n'; //true
    std::cout << czy_posortowana(tab2, 1) << '\n'; //true
    std::cout << czy_posortowana(tab2, 0) << '\n'; //true
}
