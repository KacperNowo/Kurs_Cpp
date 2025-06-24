#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Celsjusz   Fahrenheit" << endl;
    cout << "-------    ---------" << endl;
    for(int c = -10; c <= 10; c += 5) {
        double f = c * 9.0/5.0 + 32;
        cout << setw(7) << right << c << setw(12) << fixed << setprecision(2) << f << endl;
    }
    return 0;
}
