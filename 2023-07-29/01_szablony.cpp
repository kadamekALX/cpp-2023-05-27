#include <iostream>
#include <cstring>

template <typename Typ>
Typ maks(Typ a, Typ b) {
    std::cout << "szablon\n";
    if (a > b)
        return a;
    return b;
}

//specjalizacja szablonu ma pierwszeństwo przed ogólnym szablonem
template <>
const char* maks(const char* a, const char* b) {
    std::cout << "specjalizacja\n";
    if (std::strcmp(a, b) > 0)
        return a;
    return b;
}

//zwykła funkcja ma pierwszeństwo przed szablonami
const char* maks(const char* a, const char* b) {
    std::cout << "funkcja\n";
    if (std::strcmp(a, b) > 0)
        return a;
    return b;
}

int main() {
    std::cout << maks(13, 6) << '\n';
    std::cout << maks(13.9, 6.6) << '\n';
    std::cout << maks('A', 'B') << '\n';
    std::cout << maks("ABCD", "efgh") << '\n'; // wydedukowany typ: const char*
    std::cout << maks<const char*>("qwer", "asdf") << '\n';
    std::cout << maks<>("qwer", "asdf") << '\n'; //to wywoła wersję szablonową z dedukcją typów
    //std::cout << "ABCD"[2] << '\n';
}
