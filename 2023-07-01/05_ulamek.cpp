// Stwórz strukturę Ulamek, ktora będzie zawierać licznik i mianownik (inty) oraz
// napisz funkcje:
//  wypisz(u) - wypisuje Ulamek u na ekran w ładnej formie: licznik / mianownik
//  przyjmij(u) - przyjmuje licznik i mianownik od uzytkownika i wpisuje je do Ulamka u. Nie pozwol na wprowadzenie mianownika == 0
//  ustaw(u, a, b) - ustawia w Ulamku `u` licznik na `a` i mianownik na `b`
#include <iostream>

struct Ulamek {
    int licznik;
    int mianownik;
};

void wypisz(const Ulamek& u) {
    std::cout << u.licznik << " / " << u.mianownik << '\n';
}

void ustaw(Ulamek* u, int a, int b) {
    u->licznik = a;
    u->mianownik = b;
}

void przyjmij(Ulamek& u) {
    std::cout << "Podaj licznik:";
    std::cin >> u.licznik;
    u.mianownik = 0;
    while (u.mianownik == 0) {
        std::cout << "Podaj mianownik:";
        std::cin >> u.mianownik;
    }
}

int main() {
    Ulamek u;
    ustaw(&u, 1, 2);
    wypisz(u);
    przyjmij(u); //lub przyjmij(&u)
    wypisz(u);
}
