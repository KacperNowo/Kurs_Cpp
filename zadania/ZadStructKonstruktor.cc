#include <iostream>
using namespace std;

struct Struktura {
    int a;
    Struktura() : a(0) {}
    Struktura(int x) : a(x) {}
    void pokaz() { cout << a << endl; }
};

int main() {
    Struktura s1;
    Struktura s2(10);
    s1.pokaz();
    s2.pokaz();
    return 0;
}
