#ifndef ULAMEK_HPP
#define ULAMEK_HPP

#include <iostream>

class Ulamek {
public:
    Ulamek(int, int);
    void operator*=(const Ulamek&);
    
    friend std::ostream& operator<<(std::ostream&, const Ulamek&); //friend daje dostęp funkcji (lub klasie) do pól prywatnych
    
private:
    int licznik;
    int mianownik;
};

std::ostream& operator<<(std::ostream&, const Ulamek&);

#endif
