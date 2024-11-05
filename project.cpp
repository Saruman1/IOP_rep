#include <iostream>

bool czy_pierwsza(int liczba) {
    if (liczba < 2) return false;
    for (int i = 2; i * i <= liczba; ++i) {
        if (liczba % i == 0) return false;
    }
    return true;
}

int main() {
    int liczba;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    if (liczba <= 0) {
        std::cout << "Liczba musi byc dodatnia!" << std::endl;
        return 1;
    }
    std::cout << "Wprowadzona liczba: " << liczba;
    if (czy_pierwsza(liczba)) {
        std::cout << " jest liczba pierwsza." << std::endl;
    } else {
        std::cout << " nie jest liczba pierwsza." << std::endl;
    }
    return 0;
}