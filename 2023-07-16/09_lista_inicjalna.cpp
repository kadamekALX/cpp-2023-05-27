#include <iostream>

using namespace std;

class A {
public:
    int a;
    
    A(int z) {
        a = z;
        cout<<"konstruktor A "<< z <<endl;
    }
    
    ~A() {
        cout<<"destruktor A"<<endl;
    }
};


class B : public A {
public:
    B(int d) : A{d} {
    cout<<"konstruktor B "<< d <<endl;
    }
    
    ~B() {
    cout<<"destruktor B"<<endl;
    }
};

class C : public A {
public:
    C() : A{1}, atr1{3}, atr2{4} {
        cout<<"konstruktor C "<<endl;
    }
    
    ~C() {
        cout<<"destruktor C"<<endl;
    }
    A atr1;
    A atr2;
};


int main() {

//B b(99);
C c;

cout<<c.a<<endl;
cout<<c.atr1.a<<endl;



return 0;
}
