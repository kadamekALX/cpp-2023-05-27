//Napisz program, ktory stworzy tablicę zawierającą N elementów, a następnie wypisze INDEKS, pod którym znajduje się największy element.

// przykładowo, dla N = 5 i tablicy postaci
// {10, 34, 23, 15, 7}
// powinno zostać wypisane 1.
#include <iostream>

int main() {
    const int N = 5;
    int tab[N] = {10, 34, 23, 15, 7};
    
    int idx_max = 0;
    for (int i = 1; i < N; i += 1) {
        if (tab[i] > tab[idx_max]) {
            idx_max = i;
        }
    }
    std::cout << idx_max << '\n';
}
