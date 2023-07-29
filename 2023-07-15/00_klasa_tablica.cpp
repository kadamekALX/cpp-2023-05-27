#include <iostream>

using namespace std;

class Tablica {
    private:
       int tab[5];
    public:
        Tablica(int wartosc_domyslna) {
            for (int i = 0; i < 5; i++) {
                tab[i] = wartosc_domyslna;
            }
        }
        ~Tablica() {
            cout<<"wywolanie destruktora"<<endl;
        }
        
        void ustaw_wartosc_elementu(int indeks, int wartosc) { 
        if (indeks >= 0 && indeks < 5)
            tab[indeks] = wartosc;
            else
            cout<<"Wartosc indkesu poza zakresem"<<endl;
        }
        void wyswietl() {
            for (int i = 0; i < 5; i++) {
                cout<<i + 1<<" : "<<tab[i]<<endl;
            }
        }
};


int main() {
    Tablica tablica (-1);
    
    tablica.ustaw_wartosc_elementu(3,10);
    tablica.wyswietl();  

    cout<<""<<endl;

    return 0;
}
