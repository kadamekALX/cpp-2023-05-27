#include <iostream>
#include <string>

template <typename T>
class Tablica {
public:
    Tablica(unsigned rozmiar);
    Tablica(const Tablica& kopia_tablicy);
//     Tablica(Tablica&& tymczasowa); //move constructor | Typ&& - rvalue reference
    ~Tablica();
    
    void operator=(const Tablica& inna); //kopiujący operator przypisania
    
    T& operator[](unsigned indeks);
    const T& operator[](unsigned indeks) const; // można "przeładować" metodę po `const` - naprawdę wpływa to na constowość wskaźnika `this`
    
    void wyswietl() const;
    
    unsigned getRozmiar() const { return rozmiar; }

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
void Tablica<T>::operator=(const Tablica& inna) {
    if (this == &inna) //x = x;
    {
        std::cout << "samoprzypisanie!\n";
        return;
    }
    
    delete[] tab; // zwalniamy starą pamięć
    
    rozmiar = inna.rozmiar;
    tab = new T[rozmiar];
    for (unsigned i = 0; i < rozmiar; i += 1) {
        tab[i] = inna.tab[i];
    }
}


template <typename T>
T& Tablica<T>::operator[](unsigned indeks) {
//     std::cout << "nie const\n";
    return tab[indeks];
}

template <typename T>
const T& Tablica<T>::operator[](unsigned indeks) const {
//     std::cout << "const\n";
    return tab[indeks];
}


template <typename T>
void Tablica<T>::wyswietl() const {
    for (unsigned i = 0; i < rozmiar; i++) {
        std::cout<< i << " : " << tab[i] << '\n';
    }
}

void wypisz(const Tablica<int>& tab) {
    for (unsigned i = 0; i < tab.getRozmiar(); i += 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
}

int main() {
    Tablica<int> tab{5};
    for (int i = 0; i < 5; i += 1) {
        tab[i] = i * 10;
    }
    tab.wyswietl();
    
    tab = tab;
    
    Tablica<int> tab2 = tab; //tab2{tab}
//     Tablica<int> tab3{Tablica<int>{10}}; // tu może przydać się move constructor
    tab2[3] = 123;
    tab2.wyswietl();
    tab = tab2; // tab.operator=(tab2);
    tab.wyswietl();
    wypisz(tab);
}

