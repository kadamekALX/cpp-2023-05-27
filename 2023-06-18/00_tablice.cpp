#include <iostream>
// dostęp do nieistniejących pól tablicy to undiefined behaviour!

// w C rozmiar tablicy może być zmienną, np. int tab[n];
// w C++ rozmiar tablicy musi być stały i znany na etapie kompilacji

int main() {
    const int MAX = 10; //const oznacza stałą - po stworzeniu nie można zmienić jej wartości
    int tablica[MAX]; //tablica[0], tablica[1], ... tablica[9]
//     std::cin >> tablica[0] >> tablica[1] >> tablica[5];
//     std::cout << tablica[1] << ' ' << tablica[5] << ' ' << tablica[0] << '\n';
    
    for (int i = 0; i < MAX; i += 1) {
        std::cin >> tablica[i];
    }
    
    std::cout << "przyjalem liczby\n";
    for (int i = 0; i < MAX; i += 1) {
        std::cout << tablica[i] << '\n';
    }
    
    int tab[4] = {10, 20, 30, 40}; //możemy uzupełnić tablicę od razu przy jej tworzeniu
}

