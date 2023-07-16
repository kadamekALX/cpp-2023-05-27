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
            czysc();
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
        
        int& operator[](int indeks){
        if (indeks >= rozmiar) {
            throw std::out_of_range("przekroczono indeks");
        }
        
         return tab[indeks];
         
        }
        
        void powiekszenie(int x){
        //ta funkcja nie dziala prawidlowo 
            int* tmp = new int[rozmiar + x];
            for (int i = 0; i < rozmiar; i++) {
                tmp[i] = tab[i];
            } 
            delete[] tab;
            rozmiar += x;
            tab = tmp;
            delete [] tmp;
        }

        void czysc() {
            for (int i = 0; i < rozmiar; i++) {
                tab[i] = 0;
            }
        }
        void wyswietl() {
            for (int i = 0; i < rozmiar; i++) {
                cout<<i<<" : "<<tab[i]<<endl;
            }
        }
};


int main() {

try{
    Tablica tablica1(6);
    
    tablica1.powiekszenie(10);
    tablica1[11] = 12;
    tablica1[2] = 10;
    
    cout<<"tablica1[3] "<<tablica1[3]<<endl;
    cout<<"tablica1[4] "<<tablica1[4]<<endl;
    cout<<"tablica1[5] "<<tablica1[5]<<endl;
    
    tablica1.wyswietl();  
  
    }
catch(int error){
        cout<<"wystapil blad "<<error<<endl;
    }

    return 0;
}







