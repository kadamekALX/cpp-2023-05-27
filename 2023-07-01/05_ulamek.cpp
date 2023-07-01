// Stwórz strukturę Ulamek, ktora będzie zawierać licznik i mianownik (inty) oraz
// napisz funkcje:
//  wypisz(u) - wypisuje Ulamek u na ekran w ładnej formie: licznik / mianownik
//  przyjmij(u) - przyjmuje licznik i mianownik od uzytkownika i wpisuje je do Ulamka u. Nie pozwol na wprowadzenie mianownika == 0
//  ustaw(u, a, b) - ustawia w Ulamku `u` licznik na `a` i mianownik na `b`
//  mnoz(u, v) - domnaża Ulamek `v` do Ulamka `u`
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

Ulamek stworz(int licznik = 0, int mianownik = 1) {
    Ulamek u;
    u.licznik = licznik;
    u.mianownik = mianownik;
    if (u.mianownik == 0) {
        std::cout << "Probujesz ustawic mianownik na 0!\n";
        u.mianownik = 1;
    }
    return u;
}

void przyjmij(Ulamek& u) {
    std::cout << "Podaj licznik:";
    std::cin >> u.licznik;
    
    do {
        std::cout << "Podaj mianownik:";
        std::cin >> u.mianownik;
    } while (u.mianownik == 0);
}

void mnoz(Ulamek* u, const Ulamek& v) {
    u->licznik *= v.licznik;
    u->mianownik *= v.mianownik;
}

int main() {
    Ulamek u;
    ustaw(&u, 1, 2);
    wypisz(u);
//     przyjmij(u); //lub przyjmij(&u)
//     wypisz(u);
    Ulamek v;
    ustaw(&v, 2, 3);
    wypisz(v);
    mnoz(&u, v); // mnozy `u` * `v` i wynik zapisuje w `u`
    wypisz(u); // 1/3 lub 2/6
    Ulamek z = stworz(3, 5);
    wypisz(z);
}
