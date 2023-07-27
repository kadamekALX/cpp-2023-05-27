//#include <math.h>
#include <cmath>
#include <iostream>

using namespace std;

class Figura {
public:
    virtual double pole() const = 0;
//protected:
//    double dlugosc;
};

class Kwadrat : public Figura {
private:
    double bok;
public:
    Kwadrat(double dlugosc_boku) : bok(dlugosc_boku) {}
    
    double pole() const override {
        return bok * bok; 
    }
};

class Kolo : public Figura {
private:
    double promien;
public:
    Kolo(double r) : promien(r) {}
    
    double pole() const override {
        return M_PI * promien * promien;
    }    
};

class Elipsa : public Figura {
private:
    double promien1;
    double promien2;
    
public:
    Elipsa(double r1, double r2):promien1(r1), promien2(r2) {}

    double pole() const override {
        return M_PI * promien1 * promien2;
    }    
};

int main() {

const int rozmiar_tablicy = 3;
Figura* figury[rozmiar_tablicy];

figury[0] = new Kwadrat(3.0);
figury[1] = new Kolo(2.0);
figury[2] = new Elipsa(1.0, 5.0);

for (int i = 0; i < rozmiar_tablicy; i ++) {
    cout<< figury[i]->pole()<<endl;
    delete figury[i];
}

return 0;
}

