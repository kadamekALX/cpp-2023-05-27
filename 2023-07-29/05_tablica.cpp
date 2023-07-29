#include <iostream>

//1. Przenieś definicje metod klasy `Tablica` na zewnątrz tej klasy
//2. Zrób z klasy `Tablica` klasę szablonową parametryzowaną typem przechowywanych wartości

class Tablica {
public:
    Tablica(int rozmiar);
    Tablica(const Tablica& kopia_tablicy);
    ~Tablica();
    int& operator[](int indeks);
    void wyswietl() const;

private:
    int* tab;
    int rozmiar;
};



Tablica::Tablica(int rozmiar) {
    this->rozmiar = rozmiar;
    tab = new int[rozmiar];
}

Tablica::~Tablica() {
    delete[] tab;
}

Tablica::Tablica(const Tablica& kopia_tablicy) : rozmiar(kopia_tablicy.rozmiar){
    tab = new int[rozmiar];
    for (int i = 0; i < rozmiar; i ++) {
        tab[i] = kopia_tablicy.tab[i];
    } 
}

int& Tablica::operator[](int indeks) {
    if (indeks >= rozmiar) {
        throw std::out_of_range("przekroczono indeks");
    }
    return tab[indeks];
}

void Tablica::wyswietl() const {
    for (int i = 0; i < rozmiar; i++) {
        std::cout<< i << " : " << tab[i] << '\n';
    }
}


int main() {
    Tablica tab{5};
    for (int i = 0; i < 5; i += 1) {
        tab[i] = i * 10;
    }
    tab.wyswietl();
//     Tablica<int> tab{5};
//     for (int i = 0; i < 5; i += 1) {
//         tab[i] = i * 10;
//     }
//     tab.wyswietl();
//     
//     Tablica<double> tab2{5};
//     for (int i = 0; i < 5; i += 1) {
//         tab2[i] = i * 3.14;
//     }
//     tab2.wyswietl();
}
