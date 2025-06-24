#include <iostream>
using namespace std;

class Klasa {
private:
    int a;
public:
    Klasa() : a(0) {}
    Klasa(int x) : a(x) {}
    ~Klasa() {}
    void pokaz() { cout << a << endl; }
};

int main() {
    Klasa k1;
    Klasa k2(5);
    k1.pokaz();
    k2.pokaz();
    return 0;
}
