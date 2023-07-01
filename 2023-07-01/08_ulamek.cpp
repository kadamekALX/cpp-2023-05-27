#include <iostream>

struct Ulamek {
    //tylko metody tej klasy mają dostęp do pól prywatnych
private: // od tego miejsca wszystko jest prywatne, tzn. jest widoczne tylko wewnątrz Ulamka
    int licznik;
    int mianownik;

public:
    //konstruktor
    //I. nie posiada zwracanego typu i nazywa się tak samo jak typ, ktorego dotyczy
    //II. jest pierwszą metodą, która zostanie wywołana na obiekcie po jego stworzeniu
    explicit Ulamek(int licz, int mian = 1) { //konstuktor oznaczony jako `explicit` nie może zostać wykorzystany do automatycznej konwersji
        std::cout << "Tworze Ulamek " << licz << '/' << mian << "!\n";
        ustaw(licz, mian);
    }
    
    void wypisz() const {
        std::cout << licznik << " / " << mianownik << '\n';
    }

    //setter mianownika
    void ustawMianownik(int x) {
        mianownik = x;
        if (x == 0) {
            std::cout << "Probujesz ustawic mianownik na 0!\n";
            mianownik = 1;
        }
    }
    
    //getter mianownika
    int dajMianownik() const {
        return mianownik;
    }
    
    void ustaw(int licz, int mian) {
        licznik = licz;
        ustawMianownik(mian);
    }

    void mnoz(const Ulamek& ten_drugi) {
        licznik *= ten_drugi.licznik;
        mianownik *= ten_drugi.mianownik;
    }
    
    void mnoz(int x) {
        std::cout << "Przeladowane `mnoz`\n";
        licznik *= x;
    }
};

int main() {
//     Ulamek z; //Błąd, bo nie mamy konstruktora bezargumentowego
    Ulamek a{1, 2};
    Ulamek b{3, 5};
    a.wypisz();
//     b.mianownik = 0; //Błąd, bo mianownik jest polem prywatnym
    b.wypisz();
    a.mnoz(b);
    a.wypisz();
    Ulamek c{3, 0};
    c.wypisz();
    Ulamek d{5};
    d.wypisz();
    d.mnoz(3);
    d.wypisz();
}
