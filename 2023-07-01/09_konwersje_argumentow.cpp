#include <iostream>

int max(int a, int b) {
    return a > b ? a : b;
}




// I. jeżeli istnieje funkcja, która przyjmuje argumenty dokładnie takich samych typów to zostanie ona wywołana
// II. jeżeli taka funkcja nie istnieje to dopuszczamy max 1 konwersję typu per argument i patrzymy, czy wtedy jakaś funkcja będzie nam pasować. Jeżeli istnieje dokładnie 1 taka funkcja to zostanie ona uruchomiona. W przeciwnym przypadku - błąd kompilacji
int main() {
    std::cout << max(3, 5) << '\n'; // I.
    std::cout << max(3.14, 2.71) << '\n'; //II.
    std::cout << max(5, 3.1415) << '\n'; //II.
}
