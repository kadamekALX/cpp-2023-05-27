#include <iostream>

using namespace std;

class C {
public:
    int a;
    void metoda();
};

class D : public C {
public:
    int a;
    void metoda();
};

void C::metoda() {
    a = 1;
}

void D::metoda() {
    a = 2;
}

int main() {

C c;
D d;

cout << "c.a " << c.a <<endl;
cout << "d.a " << d.a <<endl;

c.metoda();
d.metoda();

cout << "c.a " << c.a <<endl;
cout << "d.a " << d.a <<endl;


return 0;
}




