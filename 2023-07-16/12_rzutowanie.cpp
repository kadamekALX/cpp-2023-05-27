#include <iostream>

using namespace std;

class Kwadrat {
public:
    virtual double pole() const {
        return dlugoscBoku * dlugoscBoku;  
    }
    
    virtual void wyswietl() const {
        cout << "kwadrat " <<endl;
    }

protected:
    double dlugoscBoku = 2.0;
};

class Prostokat : Kwadrat {
public:
    double pole() const override {
        return dlugoscBoku * szerokoscBoku;  
    }

   void wyswietl() const override {
        cout << "prostokat " <<endl;
    }

private:
    double szerokoscBoku = 7.5;
};



int main() {
    Kwadrat kwadrat;
    Prostokat prostokat;
    
    Kwadrat* wskKwadrat = &kwadrat;
    Prostokat* wskProstokat = &prostokat;
    
    wskKwadrat->wyswietl();
    cout << "Pole kwadratu: " << wskKwadrat->pole()<<endl;
    
    wskProstokat->wyswietl();
    cout << "Pole prostokata: " << wskProstokat->pole()<<endl;
    
    // bledne rzutowanie Kwadrat* wskKwadratZProst = &prostokat;
    
return 0;
}









