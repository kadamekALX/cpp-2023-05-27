#include <iostream>
#include <functional>

template <int K>
bool czy_podzielne(int n) {
    return n % K == 0;
}

template <>
bool czy_podzielne<0>(int n) {
    std::cout << "Nie dziel przez 0!\n";
    return false;
}


int main() {
//     std::function<bool(int)> czy_parzyste = czy_podzielne<2>;
    auto czy_parzyste = czy_podzielne<2>; // `auto` automatycznie dobiera typ na podstawie inicjalizującej wartości
    
    
    std::cout << czy_podzielne<2>(7) << '\n';
    std::cout << czy_parzyste(4) << '\n';
    std::cout << czy_podzielne<7>(49) << '\n';
    std::cout << czy_podzielne<0>(49) << '\n';
}
