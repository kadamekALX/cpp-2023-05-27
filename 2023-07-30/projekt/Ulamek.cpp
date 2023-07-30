#include "Ulamek.hpp"

Ulamek::Ulamek(int licz, int mian) : licznik{licz}, mianownik{mian} {}

void Ulamek::operator*=(const Ulamek& inny) {
    licznik *= inny.licznik;
    mianownik *= inny.mianownik;
}

std::ostream& operator<<(std::ostream& os, const Ulamek& u) {
    os << u.licznik << " / " << u.mianownik;
    return os;
}
