// fib(0) = 0
// fib(1) = 1
// fib(n) = fib(n - 1) + fib(n - 2)

// 0 1 1 2 3 5 8 13 21 34 55 ...
#include <iostream>

// Napisz funkcję int fib(int n), która policzy
// n-tą liczbę ciagu Fibonacciego rekurencyjnie
int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

// Napisz funkcję int fib2(int n), która policzy n-tą liczbę Fibonacciego iteracyjnie
int fib2(int n) {
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i += 1)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int x;
    std::cin >> x;
    std::cout << fib2(x) << '\n';
}
