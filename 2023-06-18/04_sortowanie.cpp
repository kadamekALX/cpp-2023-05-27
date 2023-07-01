// Napisz program, który posortuje tablicę algorytmem sortowania przez wybieranie.
// dla i = 0..(N-1)
// 1. wybierz najmniejszy element spośród indeksów od i do końca tablicy
// 2. zamien znaleziony element z elementem na pozycji i
#include <iostream>

int main() {
    const int N = 5;
    int tab[N] = {10, 3, 23, 15, 7};
    
    std::cout << "Przed:\n";
    for (int i = 0; i < N; i += 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
    
    for (int i = 0; i < N; i += 1) {
        int idx_min = i;
        for (int k = i + 1; k < N; k += 1) {
            if (tab[k] < tab[idx_min])
                idx_min = k;
        }
        int pom = tab[i];
        tab[i] = tab[idx_min];
        tab[idx_min] = pom;
    }
    
    std::cout << "Po:\n";
    for (int i = 0; i < N; i += 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
}
