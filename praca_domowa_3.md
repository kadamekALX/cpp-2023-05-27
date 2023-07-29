## Zadanie 1

Napisz funkcję `pokemonizer()`, która w przyjętym napisie zamieni litery na pozycjach parzystych na wielkie, a na nieparzystych na małe.
Przykład: z napisu `pokemon` powinno powstać `PoKeMoN`.


## Zadanie 2

Napisz program, który przyjmie __dowolnie długą__ liczbę, a następnie wypisze czy ta liczba jest podzielna przez 3.


## Zadanie 3

Napisz funkcję, która zaszyfruje podany napis [szyfrem Cezara](https://pl.wikipedia.org/wiki/Szyfr_Cezara) z podanym przesunięciem (użycie tej funkcji z ujemnym przesunięciem powinno odszyfrować zaszyfrowany napis).


## Zadanie 4

Napisz klasę Kolo, która będzie przechowywać współrzędne środka koła oraz długość jego promienia. Klasa powinna zawierać metody:

- `double pole() const` - zwraca pole koła (dla uproszczenia możemy przyjąć, że pi = 3.14).
- `bool czesc_wspolna(const Kolo& inne) const` - zwraca informację, czy koło ma jakąś część wspólną z innym kołem.


## Zadanie 5

Napisz klasę Prostokat, która będzie przechowywać opis (np. współrzędne lewego dolnego rogu oraz wysokość i szerokość) prostokąta o bokach równoległych do osi układu współrzędnych. Klasa powinna udostępniać metody:

- `pole() const` - zwraca pole prostokąta
- `obwod() const` - zwraca obwód prostokąta
- `pole_przecięcia(const Prostokat& inny) const` - zwraca pole części wspólnej z Prostokątem przekazanym przez argument.


## Zadanie 6

Napisz program, który przyjmie tablicę NxM (ustaw N i M wedle uznania) złożoną ze znaków `.` oraz `*`, a następnie wypisze ją na ekran, ale zamiast pól `.` wypisze cyfrę mówiącą ile sąsiednich pól zawiera symbol `*` (Tak jak to wygląda w grze "Saper").

Dla danych:

```
.*...
...*.
....*
.**..
.....
```
wynikiem powinno być
```
1*211
112*2
1223*
1**21
12210
```


## Zadanie 7

Wyobraźmy sobie robota, który może poruszać się naprzód i obracać w lewo lub prawo o 90 stopni.
Napisz klasę Robot, która będzie przechowywała informacje o położeniu robota na płaszczyźnie (2 liczby całkowite) oraz
kierunku w jakim jest zwrócony (np. 0 - północ(N), 1 - wschód(E), 2 - południe(S), 3 - zachód(W)).
Klasa powinna udostępniać metody:

- `wypisz()` - wypisuje położenie i zwrot robota.
- `lewo()` - zmienia kierunek, w którym zwrócony jest Robot o 90 stopni w kierunku przeciwnym do ruchu wskazówek zegara (np. z północy obracamy się na zachód).
- `prawo()` - zmienia kierunek, w którym zwrócony jest Robot o 90 stopni w kierunku zgodnym z ruchem wskazówek zegara (np. z północy obracamy się na wschód).
- `naprzod()` - przemieszcza robota krok w kierunku, w którym obecnie jest zwrócony (przykładowo krok na wschód powoduje zmianę współrzędnych z (x, y) na (x + 1, y)).
- `wykonaj(ciag_instrukcji)`, gdzie ciąg instrukcji to napis złożony z liter N, P, L oznaczających odpowiednio: Naprzód, Prawo, Lewo (tzn. instrukcja N odpowiada jednemu wywołaniu metody `naprzod()`, P - `prawo()`, L - `lewo()`).
Wywołanie metody `wykonaj()` powinno przemieścić robota zgodnie z przekazanymi instrukcjami.

Przykład:
- początkowe położenie robota: (0, 0), zwrot: N,
- ciąg instrukcji: `NNPNLNPP`,
- końcowe położenie robota: (1, 3), zwrot: S.


## Zadanie 8

Dopisz dodatkowy konstruktor do klasy Robot, który będzie przyjmował wymiary planszy po której robot może się przemieszczać (np. podanie planszy o rozmiarach 10x10 oznacza, że Robot może chodzić tylko po współrzędnych 0-9). Próba wyjścia poza określony obszar powinna być ignorowana.
Wywołanie konstruktora bez podania rozmiaru planszy nie powinno stawiać żadnych ograniczeń na współrzędne (powinno działać jak wcześniej).


## Zadanie 9 (*)

Rozszerz listę wskaźnikową z zajęć o funkcje (typy argumentów wedle zapotrzebowania):

- `dodaj_na_koniec(lista, x)` - dodaje element `x` na końcu listy.
- `znajdz(lista, x)` - zwraca ADRES pierwszego elementu o wartości `x` na liście lub `nullptr` jeśli takiego nie ma.
- `nty(lista, n)` - zwraca adres `n`-tego elementu w liście (licząc od 0) lub `nullptr` jeśli takiego nie ma.
- `dlugosc(lista)` - zwraca liczbę elementów w liście.
- `z_tablicy(tab, n)` - zwraca nową listę zawierającą wszystkie `n` elementów z tablicy `tab` (w tej samej kolejności).


## Zadanie 10 (*)

Stwórz pomocniczą strukturę Lista, która będzie przechowywała wskaźnik na pierwszy Element listy (z zadania powyżej) oraz
informacje pozwalające na obsłużenie `dodaj_na_koniec()` oraz `dlugosc()` w czasie O(1) zamiast O(n).
Zmodyfikuj wszystkie funkcje aby przyjmowały strukturę Lista zamiast wskaźnika na pierwszy element.


## Zadanie 11

Zaimplementuj dla klasy Ulamek zestaw operatorów pozwalających na wykonywanie następujących działań:
`+, -, *, /, +=, -=, *= /=, <, >, <=, >=, ==, !=`
Działania powinno dać się wykonywać dla par Ulamek-Ulamek oraz par Ulamek-int.


## Zadanie 12

Napisz funkcję, która przyjmie tablicę intów oraz funkcję przyjmującą int i zwracającą bool (`std::function<bool(int)>`), a następnie zwróci pierwszy element z tej tablicy, dla którego przekazana funkcja zwróci `true`.
Wersja łatwiejsza: Możesz założyć, że dla jakiegoś elementu zostanie zwrócone `true`.
Wersja trudniejsza: Napisz funkcję tak, aby wygonie obsłużyć przypadek, gdy dla żadnego elementu nie zostanie zwrócone `true`.
