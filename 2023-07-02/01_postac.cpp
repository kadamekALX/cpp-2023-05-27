// Napisz klasę Postac
// Postac powinna posiadać imię oraz punkty zdrowia (obecną i max ilosc)
// Klasa powinna posiadac nastepujące metody:
// - konstruktor przyjmujący imię oraz maksymalną wartosc zdrowia (zakładamy, że postać zaczyna z pełnym zdrowiem)
// - wypisz() - wypisuje informacje o Postaci, np.
//         Rufus, zdrowie: 75/100 
// - czy_zyje() - postac nie żyje jeśli obecna liczba pkt zdrowia wynosi 0
// - otrzymaj_obrazenia(n) - zmniejsza zdrowie postaci o `n`. Zdrowie nie powinno spaść poniżej 0.
// - wylecz(n) - przywraca `n` punktów zdrowia Postaci. Zdrowie nie powinno przekroczyć wartości maksymalnej. Nie ma efektu jeśli Postac nie żyje.


int main() {
    Posta rufus{"Rufus", 120};
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
}
