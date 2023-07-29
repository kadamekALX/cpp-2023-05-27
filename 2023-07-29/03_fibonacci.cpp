//napisz funkcję rekurencyjną liczącą n-tą liczbę Fibonacciego i zmierz czas jej wykonania dla N = 42
#include <iostream>
#include <chrono>

// int fib(int n) {
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;
//     return fib(n - 1) + fib(n - 2);
// }

template <int N>
int fib() {
    return fib<N - 1>() + fib<N - 2>();
}

template <>
int fib<0>() {
    return 0;
}

template <>
int fib<1>() {
    return 1;
}

int main() {
    const auto start = std::chrono::steady_clock::now();
    int fb = fib<42>();
    const auto end = std::chrono::steady_clock::now();
    const std::chrono::duration<double> elapsed_seconds = end - start;
    
    std::cout << "f(42) = " << fb << '\n' << "elapsed time: ";
    std::cout << "time " << elapsed_seconds.count() << '\n';
}
