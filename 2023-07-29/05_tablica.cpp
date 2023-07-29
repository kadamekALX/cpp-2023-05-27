#include <iostream>
#include <string>

//1. Przenieś definicje metod klasy `Tablica` na zewnątrz tej klasy
//2. Zrób z klasy `Tablica` klasę szablonową parametryzowaną typem przechowywanych wartości

template <typename T>
class Tablica {
public:
    Tablica(unsigned rozmiar);
    Tablica(const Tablica& kopia_tablicy);
    ~Tablica();
    T& operator[](unsigned indeks);
    void wyswietl() const;

private:
    T* tab;
    unsigned rozmiar;
};


template <typename T>
Tablica<T>::Tablica(unsigned rozmiar) {
    this->rozmiar = rozmiar;
    tab = new T[rozmiar];
}

template <typename T>
Tablica<T>::~Tablica() {
    delete[] tab;
}

template <typename T>
Tablica<T>::Tablica(const Tablica& kopia_tablicy) : rozmiar(kopia_tablicy.rozmiar){
    tab = new T[rozmiar];
    for (unsigned i = 0; i < rozmiar; i ++) {
        tab[i] = kopia_tablicy.tab[i];
    } 
}

template <typename T>
T& Tablica<T>::operator[](unsigned indeks) {
    if (indeks >= rozmiar) {
        throw std::out_of_range("przekroczono indeks");
    }
    return tab[indeks];
}

template <typename T>
void Tablica<T>::wyswietl() const {
    for (unsigned i = 0; i < rozmiar; i++) {
        std::cout<< i << " : " << tab[i] << '\n';
    }
}


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
    
    Tablica<std::string> tab3{3};
    tab3[0] = "Ala";
    tab3[1] = "ma";
    tab3[2] = "kota";
    tab3.wyswietl();
}
