// n! = 1 * 2 * 3 * ... * n
// 5! = 120
// 0! = 1

// napisz funkcję int silnia(int n), która policzy n! (n silnia)

// 0! = 1
// n! = n * (n - 1)!

#include <iostream>

int silnia_iteracyjnie(int n) {
    int wynik = 1;
    for (int i = 1; i <= n; i += 1) {
        wynik *= i;
    }
    return wynik;
}

int silnia(int n) {
    if (n == 0)
        return 1;
    return n * silnia(n - 1);
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cout << silnia(n) << '\n';
}
