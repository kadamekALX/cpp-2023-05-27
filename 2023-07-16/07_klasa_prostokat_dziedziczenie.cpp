#include <iostream>

using namespace std;


//Stworz klase kwadrat, ktora bedzie posiadala pole informujace o dlugosci
//boku kwadratu, oraz metode zwracajac pole() kwadratu
//dodanie getterow i setterow


class Kwadrat {
protected:
    double bok;
public:
    Kwadrat(double dlugosc_boku) {
        bok = dlugosc_boku;
    }
    
    double getBok() const {
        return bok;
    }
   
    void setBok(double nowy_bok) {
        bok = nowy_bok;
    }

    double pole() {
        return bok * bok;
    }
};

//stworz klase prostokat
class Prostokat : public Kwadrat {
private:
    double bok2;
public:
    Prostokat(double dlugosc_boku_a, double dlugosc_boku_b) : Kwadrat(dlugosc_boku_a) {
        bok2 = dlugosc_boku_b;
    }

    double getBok2() const {
        return bok2;
    }
   
    void setBok2(double nowy_bok) {
        bok2 = nowy_bok;
    }
    
    double pole() {
        return bok * bok2;
    }
};


int main() {

Prostokat prostokat(10,8.56);


cout<<"pole "<<prostokat.pole()<<endl;

return 0;
}
