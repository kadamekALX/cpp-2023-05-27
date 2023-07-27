#include <iostream>

using namespace std;

class A {
public:
    int x;

    A (int n){
        x = n;
        cout<<"konstruktor "<<x<<endl;
    }
    
    ~A() {
        cout<<"destruktor "<<x<<endl;
    }
};



int main(){
    A d{4};
    
    A a{1};
    A* b = new A{2};
    
    
    A c{3};
    delete b;
    
    return 0;
}

