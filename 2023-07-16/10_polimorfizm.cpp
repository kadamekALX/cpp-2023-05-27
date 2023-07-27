#include <iostream>

using namespace std;


class Silnik {
public:
    virtual void wyswietl() {
        cout << "Silnik "<< endl;
    }
};

class Samochod : public Silnik {
public:
    virtual void wyswietl() override {
        cout << "Samochod "<< endl;
    }
};

class Samochod2 : public Silnik {
public:
    void wyswietl() {
        cout << "Samochod 2 "<< endl;
    }
};


int main() {

Silnik silnik;
Samochod samochod;
Samochod2 samochod2;

silnik.wyswietl();
samochod.wyswietl();
samochod2.wyswietl();


return 0;
}
