#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x = 12.3456789, y = 98.7654321;
    cout << "==================================================" << endl;
    cout << "Wynika naszego działania: " << fixed << setprecision(5) << x << " jest niepoprawny ale:" << endl;
    cout << "   output:   " << setw(7) << setprecision(3) << x << "    T:  " << setw(6) << setprecision(3) << y << endl;
    cout << "   output1:  " << setw(7) << setprecision(4) << x << "   T: " << setw(7) << setprecision(5) << y << endl;
    cout << "   output2:  " << setw(7) << setprecision(4) << x << "   T: " << setw(8) << setprecision(6) << y << endl;
    cout << "   ---------------------------------" << endl;
    cout << "   average: " << setw(7) << setprecision(4) << (x+y)/2 << "   T: " << setw(8) << setprecision(6) << (x+y) << endl;
    cout << "==================================================" << endl;
    return 0;
}
