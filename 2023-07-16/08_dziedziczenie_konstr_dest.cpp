#include <iostream>

using namespace std;

class A {
public:
    A() {
    cout<<"konstruktor A"<<endl;
    }
    
    ~A() {
    cout<<"destruktor A"<<endl;
    }
};


class B : public A {
public:
    B() {
    cout<<"konstruktor B"<<endl;
    }
    
    ~B() {
    cout<<"destruktor B"<<endl;
    }
};

class C: public B {
public:
    C() {
    cout<<"konstruktor C"<<endl;
    }
    ~C() {
    cout<<"destruktor C"<<endl;
    }
};



int main() {

A a;
B b; 
C c;


return 0;
}
