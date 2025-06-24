#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double pi = 3.141593, e = 2.718282, phi = 1.618034;
    cout << left << setw(15) << "Stala" << setw(20) << "Wartosc" << setw(20) << "Notacja stala" << setw(20) << "Naukowa" << endl;
    cout << left << setw(15) << "Pi" << setw(20) << pi << setw(20) << fixed << setprecision(6) << pi << scientific << pi << endl;
    cout << left << setw(15) << "e" << setw(20) << e << setw(20) << fixed << setprecision(6) << e << scientific << e << endl;
    cout << left << setw(15) << "Zloty podzial" << setw(20) << phi << setw(20) << fixed << setprecision(6) << phi << scientific << phi << endl;
    return 0;
}
