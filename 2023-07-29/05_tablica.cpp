#include <iostream>

//1. Przenieś definicje metod klasy `Tablica` na zewnątrz tej klasy
//2. Zrób z klasy `Tablica` klasę szablonową parametryzowaną typem przechowywanych wartości

class Tablica {
public:
    Tablica(int rozmiar) {
        this->rozmiar = rozmiar;
        tab = new int[rozmiar];
    }
    
    ~Tablica() {
        delete[] tab;
    }
    
    Tablica(const Tablica& kopia_tablicy) : rozmiar(kopia_tablicy.rozmiar){
        tab = new int[rozmiar];
        for (int i = 0; i < rozmiar; i ++) {
            tab[i] = kopia_tablicy.tab[i];
        } 
    }
    
    int& operator[](int indeks) {
        if (indeks >= rozmiar) {
            throw std::out_of_range("przekroczono indeks");
        }
        return tab[indeks];
    }

    void wyswietl() const {
        for (int i = 0; i < rozmiar; i++) {
            std::cout<< i << " : " << tab[i] << '\n';
        }
    }
    
private:
    int* tab;
    int rozmiar;
};

int main() {
    Tablica<int> tab{5};
    for (int i = 0; i < 5; i += 1) {
        tab[i] = i * 10;
    }
    tab.wyswietl();
    
    Tablica<double> tab2{5};
    for (int i = 0; i < 5; i += 1) {
        tab2[i] = i * 3.14;
    }
    tab2.wyswietl();
}
