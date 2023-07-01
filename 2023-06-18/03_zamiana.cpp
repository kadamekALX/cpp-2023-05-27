// Napisz program, który w tablicy zamieni miejscami najwiekszy element z najmniejszym.

// przed:
// 10 34 23 15 7
// po:
// 10 7 23 15 34
#include <iostream>

int main() {
    const int N = 5;
    int tab[N] = {10, 34, 23, 15, 7};
    
    for (int i = 0; i < N; i += 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
    
    int idx_max = 0;
    int idx_min = 0;
    for (int i = 1; i < N; i += 1) {
        if (tab[i] > tab[idx_max]) {
            idx_max = i;
        }
        if (tab[i] < tab[idx_min]) {
            idx_min = i;
        }
    }
    std::cout << idx_max << '\n';
    std::cout << idx_min << '\n';
    int pom = tab[idx_max];
    tab[idx_max] = tab[idx_min];
    tab[idx_min] = pom;
    
    for (int i = 0; i < N; i += 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
}
