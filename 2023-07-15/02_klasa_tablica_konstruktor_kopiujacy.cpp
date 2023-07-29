#include <iostream>

using namespace std;

class Tablica {
    private:
        int* tab;
        int rozmiar;
    public:
        Tablica(int rozmiar) {
            this->rozmiar = rozmiar;
            tab = new int[rozmiar];
        }
        ~Tablica() {
            delete[] tab;
            cout<<"wywolanie destruktora"<<endl;
        }
        Tablica(const Tablica& kopia_tablicy) : rozmiar(kopia_tablicy.rozmiar){
            tab = new int[rozmiar];
            for (int i = 0; i < rozmiar; i ++) {
                tab[i] = kopia_tablicy.tab[i];
            } 
        }
        void ustaw_wartosc_elementu(int indeks, int wartosc) { 
        if (indeks >= 0 && indeks < rozmiar)
            tab[indeks] = wartosc;
            else
            cout<<"Wartosc indkesu poza zakresem"<<endl;
        }
    
        void wyswietl() {
            for (int i = 0; i < rozmiar; i++) {
                cout<<i<<" : "<<tab[i]<<endl;
            }
        }
};


int main() {
    Tablica tablica1(6);
    
    tablica1.ustaw_wartosc_elementu(2,1000);
    
    Tablica tablica2(tablica1);
    
    tablica2.ustaw_wartosc_elementu(3,33);


    tablica1.wyswietl();  
    tablica2.wyswietl();  

    cout<<""<<endl;

    return 0;
}
