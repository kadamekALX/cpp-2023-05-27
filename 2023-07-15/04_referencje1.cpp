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
        
        int& wstaw_wartosc(int indeks) {
            return tab[indeks];
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
    
    tablica1.ustaw_wartosc_elementu(2,99);


    tablica1.wstaw_wartosc(2) = 44;
    
    tablica1.wyswietl();  
  

    cout<<""<<endl;

    return 0;
}
