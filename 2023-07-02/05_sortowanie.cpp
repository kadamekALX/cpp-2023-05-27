#include <iostream>
#include <algorithm> //std::sort

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
    bool operator>(const Ulamek& inny) const;

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
    std::cout << "operator<\n";
    return licznik * inny.mianownik < mianownik * inny.licznik;
}


// *this > inny -> inny < *this
bool Ulamek::operator>(const Ulamek& inny) const {
    std::cout << "operator>\n";
    return inny < *this; //*this to _TEN SAM_ obiekt, na którym została wywołana metoda
}


int main() {
    int tab[5] = {5, 2, 7, 1, 4};
    std::sort(tab, tab + 5);
    for (int i = 0; i < 5; i += 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
    
    Ulamek tab2[5] = {{1, 2}, {2, 5}, {3, 8}, {7, 12}, {3, 4}};
    std::sort(tab2, tab2 + 5); //std::sort domyślnie korzysta tylko z operator<
    for (int i = 0; i < 5; i += 1) {
        tab2[i].wypisz();
    }
    
}
