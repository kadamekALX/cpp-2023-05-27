#include <iostream>

using namespace std;


int main() {
    
    int zmienna = 201;
    
    cout<<"Wartosc zmiennej    "<< zmienna <<endl;
    
    int tablica[] = {1,2,3,4,5,6};  //tablica[4] != 5
        
    cout<<"Adres zmiennej    "<< &zmienna <<endl;   
    
    cout<<"Adres tablicy     "<< &tablica <<endl;  
    cout<<"Adres tablicy[0]  "<< &tablica[0] <<endl;  
    cout<<"Adres tablicy[1]  "<< &tablica[1] <<endl;
    
    cout<<""<<endl;
    
    int * wskaznik = &zmienna;
    
    cout<<"wskaznik  "<< wskaznik <<endl;
    * wskaznik = 100;
    
     cout<<"Wartosc zmiennej    "<< zmienna <<endl;
    
    int *wsk = &tablica[4];
    *wsk = 333;
    
    
    cout<<tablica[4]<<endl;
    
    
    return 0;
}


