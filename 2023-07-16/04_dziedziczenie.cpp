#include <iostream>

using namespace std;


class A {
public:
    int z;
private:
    double x;
protected:
    int y;
};

class B : public A{
public:
    int t;
    int r;

};


/*
            >>dziedziczenie>> 
            public      private     protected
pola:
public      public      private     protected 
private     -           -           -
protected   protected   -           protected 

*/

class Obiekt {
public:
    double sila;
    double predkosc;
    double wytrzymalosc;
};


class Pojazd : public Obiekt {
public:
    double pancerz_kola;
    double pancerz_szyby;
};

class Postac : public Obiekt {
public:
    double pancerz;
    int ilosc_amunicji;
};



int main() {

A a;
B b; 


cout<<a.z<<endl;
cout<<b.z<<endl;



return 0;
}
