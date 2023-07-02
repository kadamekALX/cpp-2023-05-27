#include <iostream>

// I. Zmodyfikuj klasę Ulamek tak, aby metody były definiowane poza nią.
// II. Dopisz odpowiednie operatory, żeby kod w funkcji main() działał poprawnie.

class Ulamek {
public:
    Ulamek(int licz, int mian = 1) {
        ustaw(licz, mian);
    }
    
    void wypisz() const {
        std::cout << licznik << " / " << mianownik << '\n';
    }

    void ustawMianownik(int x) {
        mianownik = x;
        if (x == 0) {
            std::cout << "Probujesz ustawic mianownik na 0!\n";
            mianownik = 1;
        }
    }
    
    int dajMianownik() const {
        return mianownik;
    }
    
    void ustaw(int licz, int mian) {
        licznik = licz;
        ustawMianownik(mian);
    }

    void operator*=(const Ulamek& ten_drugi) { //a *= b;
        std::cout << "operator*=\n";
        licznik *= ten_drugi.licznik;
        mianownik *= ten_drugi.mianownik;
    }

private:
    int licznik;
    int mianownik;
};

int main() {
    Ulamek a{1, 2};
    Ulamek b{3, 5};
    a *= b; // to wywoła a.operator*=(b);
    Ulamek c = a + b;
    c += b;
    Ulamek d{5, 6};
    if (d < c) {
        std::cout << "c jest wieksze\n";
    }
    else {
        std::cout << "d jest wieksze\n";
    }
}
