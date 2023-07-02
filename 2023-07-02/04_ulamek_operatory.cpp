#include <iostream>

// I. Zmodyfikuj klasę Ulamek tak, aby metody były definiowane poza nią.
// II. Dopisz odpowiednie operatory, żeby kod w funkcji main() działał poprawnie.

class Ulamek {
public:
    Ulamek(int licz, int mian);
    
    void wypisz() const;
    void ustawMianownik(int x);
    int dajMianownik() const;
    void ustaw(int licz, int mian);

    void operator*=(const Ulamek& ten_drugi);
    void operator+=(const Ulamek& ten_drugi);
    Ulamek operator+(const Ulamek& inny) const;
    
    bool operator<(const Ulamek& inny) const;

private:
    int licznik;
    int mianownik;
};

Ulamek::Ulamek(int licz, int mian) {
    ustaw(licz, mian);
}

void Ulamek::wypisz() const {
    std::cout << licznik << " / " << mianownik << '\n';
}

void Ulamek::ustawMianownik(int x) {
    mianownik = x;
    if (x == 0) {
        std::cout << "Probujesz ustawic mianownik na 0!\n";
        mianownik = 1;
    }
}

int Ulamek::dajMianownik() const {
    return mianownik;
}

void Ulamek::ustaw(int licz, int mian) {
    licznik = licz;
    ustawMianownik(mian);
}

void Ulamek::operator*=(const Ulamek& ten_drugi) { //a *= b;
    std::cout << "operator*=\n";
    licznik *= ten_drugi.licznik;
    mianownik *= ten_drugi.mianownik;
}

void Ulamek::operator+=(const Ulamek& inny) {
    licznik = licznik * inny.mianownik + mianownik * inny.licznik;
    mianownik *= inny.mianownik;
}

Ulamek Ulamek::operator+(const Ulamek& inny) const {
    int a = licznik * inny.mianownik + mianownik * inny.licznik;
    int b = mianownik * inny.mianownik;
    Ulamek wynik{a, b};
    return wynik;
}

bool Ulamek::operator<(const Ulamek& inny) const {
    return licznik * inny.mianownik < mianownik * inny.licznik;
}

int main() {
    Ulamek a{1, 2};
    Ulamek b{3, 5};
    a *= b; // to wywoła a.operator*=(b);
    a.wypisz();
    Ulamek c = a + b; // Ulamek c = a.operator+(b);
    a.wypisz();
    b.wypisz();
    c.wypisz();
    c += b;
    c.wypisz();
    Ulamek d{5, 6};
    if (d < c) {
        std::cout << "c jest wieksze\n";
    }
    else {
        std::cout << "d jest wieksze\n";
    }
}
