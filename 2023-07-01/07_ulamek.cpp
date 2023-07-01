// // Napisz strukturę Ulamek (jak w pliku 05_ulamek.cpp), ale funkcje 
//  wypisz
//  przyjmij
//  ustaw
//  mnoz
// powinny być metodami Ulamka
#include <iostream>

struct Ulamek {
    int licznik;
    int mianownik;
    
    void wypisz() const {
        std::cout << licznik << " / " << mianownik << '\n';
    }
    
    void ustaw(int licz, int mian) {
        licznik = licz;
        mianownik = mian;
    }
    
    void przyjmij() {
        int a, b;
        std::cout << "Podaj licznik: ";
        std::cin >> a;
        do {
            std::cout << "Podaj mianownik: ";
            std::cin >> b;
        } while (b == 0);
        ustaw(a, b); //wywoła metodę `ustaw` na tym samym obiekcie
    }
    
    void mnoz(const Ulamek& ten_drugi) {
        licznik *= ten_drugi.licznik;
        mianownik *= ten_drugi.mianownik;
    }
};

int main() {
    Ulamek a, b;
    a.przyjmij();
    a.wypisz();
    b.przyjmij();
    b.wypisz();
    a.mnoz(b);
    a.wypisz();
}
