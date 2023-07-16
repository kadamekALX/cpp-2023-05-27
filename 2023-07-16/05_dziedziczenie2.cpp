class A{
private:
    int skl1;
    void m2();
protected:
    int skl2;
public:
    int skl3;
};

class B : public A{
private: 
    int skl4;
protected:
    int skl5;
public:
    int skl6;
    void metoda();
};

void B::metoda(){
   // skl1 = 1;
    skl2 = 2;
    skl3 = 3;
    skl4 = skl5 = skl6 = 4;
}

int main(){
A a;
B b;

int z; 

//z = a.skl1;  //private                      //widoczne tylko w klasie
//z = a.skl2;  //protected  <-- private       //widoczne tylko w klasie
z = a.skl3;

//z = b.skl1;    //private <-- nie dziedziczona 
//z = b.skl2;    //private <-- protected       /widoczne tylko w klasie
z = b.skl3;
//z = b.skl4;     //private  /widoczne tylko w klasie
//z = b.skl5;    //private  /widoczne tylko w klasie
z = b.skl6;    



return 0;
}
