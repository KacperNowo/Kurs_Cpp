#include <iostream>
using namespace std;

struct Struktura {
    int a;
    double b;
};

int main() {
    Struktura s1 = {1, 2.5};
    Struktura s2;
    s2.a = 3; s2.b = 4.5;
    cout << s1.a << " " << s1.b << endl;
    cout << s2.a << " " << s2.b << endl;
    return 0;
}
