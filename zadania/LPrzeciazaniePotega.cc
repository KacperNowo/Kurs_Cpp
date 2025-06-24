#include <iostream>
using namespace std;

int potega(int a, int b) {
    int wynik = 1;
    for(int i = 0; i < b; ++i) wynik *= a;
    return wynik;
}

double potega(double a, int b) {
    double wynik = 1.0;
    for(int i = 0; i < b; ++i) wynik *= a;
    return wynik;
}

int main() {
    cout << "2^3 = " << potega(2, 3) << endl;
    cout << "2.5^3 = " << potega(2.5, 3) << endl;
    return 0;
}
