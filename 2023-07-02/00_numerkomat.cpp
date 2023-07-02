//Napisz klasę Numerkomat, która będzie posiadać metody:
// - pobierz_numerek() - zwraca wydrukwany numerek, za każdym razem o 1 większy niż poprzedni.
//         Dodatkowo wywołanie pobierz_numerek() powinno wypisać ile obecnie jest osób w kolejce
// - nastepny_klient() - wywołuje kolejny numerek do okienka. 
#include <iostream>

class Numerkomat {
public:
    Numerkomat() {
        nast_numer = 1;
        nast_klient = 1;
    }
    
    int ile_oczekujacych() const {
        return nast_numer - nast_klient;
    }
    
    int pobierz_numerek() {
        std::cout << "Osob w kolejce: " << ile_oczekujacych() << '\n';
        int tmp = nast_numer;
        nast_numer += 1;
        return tmp;
    }
    
    int nastepny_klient() {
        if (ile_oczekujacych() == 0) {
            std::cout << "Brak oczekujacych!\n";
            return -1;
        }
        int tmp = nast_klient;
        nast_klient += 1;
        return tmp;
    }
private:
    int nast_numer;
    int nast_klient;
};

int main() {
    Numerkomat n;
    int a = n.pobierz_numerek(); //zwraca 1, osób w kolejce: 0
    std::cout << "Pobrano " << a << '\n';
    int b = n.pobierz_numerek(); //zwraca 2, osób w kolejce: 1
    std::cout << "Pobrano " << b << '\n';
    int c = n.pobierz_numerek(); //zwraca 3, osób w kolejce: 2
    std::cout << "Pobrano " << c << '\n';
    std::cout << "Zapraszamy numer " << n.nastepny_klient() << '\n'; //wywołuje numerek 1
    int d = n.pobierz_numerek(); //zwraca 4, osob w kolejce: 2 (bo nr '1' jest juz obsluzony)
    std::cout << "Pobrano " << d << '\n';
    std::cout << "Zapraszamy numer " << n.nastepny_klient() << '\n';
    std::cout << "Zapraszamy numer " << n.nastepny_klient() << '\n';
    std::cout << "Zapraszamy numer " << n.nastepny_klient() << '\n';
    std::cout << "Zapraszamy numer " << n.nastepny_klient() << '\n';
    std::cout << "Zapraszamy numer " << n.nastepny_klient() << '\n';
    std::cout << "Zapraszamy numer " << n.nastepny_klient() << '\n';
    std::cout << "Zapraszamy numer " << n.nastepny_klient() << '\n';
    
}
