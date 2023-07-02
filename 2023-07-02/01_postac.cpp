// Napisz klasę Postac
// Postac powinna posiadać imię oraz punkty zdrowia (obecną i max ilosc)
// Klasa powinna posiadac nastepujące metody:
// - konstruktor przyjmujący imię oraz maksymalną wartosc zdrowia (zakładamy, że postać zaczyna z pełnym zdrowiem)
// - wypisz() - wypisuje informacje o Postaci, np.
//         Rufus, zdrowie: 75/100 
// - czy_zyje() - postac nie żyje jeśli obecna liczba pkt zdrowia wynosi 0
// - otrzymaj_obrazenia(n) - zmniejsza zdrowie postaci o `n`. Zdrowie nie powinno spaść poniżej 0.
// - wylecz(n) - przywraca `n` punktów zdrowia Postaci. Zdrowie nie powinno przekroczyć wartości maksymalnej. Nie ma efektu jeśli Postac nie żyje.
#include <iostream>
#include <string>

class Postac {
public:
    Postac(const std::string& imie, int maxHP)
    {
        this->imie = imie;
        maxZdrowie = maxHP;
        zdrowie = maxHP;
    }
    
    void wypisz() const
    {
        std::cout << imie << ", zdrowie: " << zdrowie << "/" << maxZdrowie << '\n';
    }
    
    bool czy_zyje() const
    {
        return zdrowie > 0;
    }
    
    void otrzymaj_obrazenia(int ile)
    {
        zdrowie -= ile;
        if (zdrowie < 0)
            zdrowie = 0;
    }
    
    void wylecz(int ile)
    {
        if (!czy_zyje())
            return; //wychodzimy, bo nie mozna leczyc trupów
        
        zdrowie += ile;
        if (zdrowie > maxZdrowie)
            zdrowie = maxZdrowie;
    }
    
private:
    std::string imie;
    int maxZdrowie;
    int zdrowie;
};

int main() {
    Postac rufus{"Rufus", 120};
    rufus.wypisz(); // Rufus, 120/120 HP
    rufus.otrzymaj_obrazenia(15);
    rufus.wypisz(); // Rufus, 105/120 HP
    rufus.wylecz(10);
    rufus.wypisz(); // Rufus, 115/120 HP
    rufus.wylecz(10);
    rufus.wypisz(); // Rufus, 120/120 HP
    while (rufus.czy_zyje()) {
        rufus.otrzymaj_obrazenia(7);
        rufus.wypisz();
    }
    rufus.wylecz(20);
    rufus.wypisz();
}

// Dodatkowe pomysły:
// - Atrybut `atak` ustawiany przy tworzeniu Postaci.
// - Funkcja przyjmująca 2 Postacie i przeprowadzająca między nimi walkę na śmierć i życie. Postacie na przemian zadają przeciwnikowi `atak` obrażeń.
// - Metoda zwracająca siłę ataku zmodyfikowaną o losową liczbę, np. atak * losowa(0.8, 1.2). Przerób funkcję walki tak, aby korzystała z tej metody
// - Pancerz zmniejszający otrzymane obrażenia
// - Ekwipunek
