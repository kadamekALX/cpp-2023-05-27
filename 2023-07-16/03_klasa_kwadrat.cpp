#include <iostream>

using namespace std;


//Stworz klase kwadrat, ktora bedzie posiadala pole informujace o dlugosci
//boku kwadratu, oraz metode zwracajac pole() kwadratu
//dodanie getterow i setterow


class Kwadrat {
private:
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
class Prostokat {
private:
    double bok_a;
    double bok_b;
public:
    Prostokat(double dlugosc_boku_a, double dlugosc_boku_b) {
        bok_a = dlugosc_boku_a;
        bok_b = dlugosc_boku_b;
    }

    double pole() {
        return bok_a * bok_b;
    }
};








int main() {
double bok = 4.5;

//cout<<"podaj dlugosc boku kwadratu "<<endl;
//cin>>bok;

Kwadrat kwadrat (bok);

cout<<"pole "<<kwadrat.pole()<<endl;
 
kwadrat.setBok(bok + 2);
 cout<<"pole "<<kwadrat.pole()<<endl;
 
 cout<<"dlugosc boku "<< kwadrat.getBok()<<endl;
return 0;
}
