#include <iostream>
using namespace std;

class Klasa {
private:
    int prywatna = 1;
protected:
    int chroniona = 2;
public:
    int publiczna = 3;

    void pokaz() { cout << prywatna << " " << chroniona << " " << publiczna << endl; }
    void ustawPrywatna(int x) { prywatna = x; }

    inline void inlineFunkcja() { cout << "Inline funkcja" << endl; }
};

int main() {
    Klasa k;
    k.pokaz();
    k.ustawPrywatna(10);
    k.pokaz();
    k.inlineFunkcja();
    return 0;
}
