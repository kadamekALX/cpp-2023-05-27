#include <iostream>
#include <cmath>

class Figura {
public:
    // Metoda wirtualna do obliczania pola powierzchni
    virtual double pole() const = 0;
};

class Kwadrat : public Figura {
private:
    double bok;

public:
    // Konstruktor klasy Kwadrat
    Kwadrat(double dlugosc_boku) : bok(dlugosc_boku) {}

    // Metoda przesłaniająca pole() dla kwadratu
    double pole() const override {
        return bok * bok;
    }
};

class Prostokat : public Figura {
private:
    double bok1;
    double bok2;

public:
    // Konstruktor klasy Prostokat
    Prostokat(double dlugosc_boku1, double dlugosc_boku2) : bok1(dlugosc_boku1), bok2(dlugosc_boku2) {}

    // Metoda przesłaniająca pole() dla prostokąta
    double pole() const override {
        return bok1 * bok2;
    }
};

class Kolo : public Figura {
private:
    double promien;

public:
    // Konstruktor klasy Kolo
    Kolo(double r) : promien(r) {}

    // Metoda przesłaniająca pole() dla koła
    double pole() const override {
        return M_PI * promien * promien;
    }
};

class Elipsa : public Figura {
private:
    double polos1;
    double polos2;

public:
    // Konstruktor klasy Elipsa
    Elipsa(double o1, double o2) : polos1(o1), polos2(o2) {}

    // Metoda przesłaniająca pole() dla elipsy
    double pole() const override {
        return M_PI * polos1 * polos2;
    }
};

int main() {
    const int rozmiar_tablicy = 4;
    Figura* figury[rozmiar_tablicy];

    figury[0] = new Kwadrat(2.0);
    figury[1] = new Prostokat(3.0, 4.0);
    figury[2] = new Kolo(1.5);
    figury[3] = new Elipsa(2.5, 5.0);

    double suma_pol = 0.0;

    for (int i = 0; i < rozmiar_tablicy; i++) {
        suma_pol += figury[i]->pole();
    }

    std::cout << "Suma pol wszystkich figur: " << suma_pol << std::endl;

    // Zwalniamy pamięć
    for (int i = 0; i < rozmiar_tablicy; i++) {
        delete figury[i];
    }

    return 0;
}