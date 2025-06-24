#include <iostream>
using namespace std;

double pole(double a) { // kwadrat
    return a * a;
}

double pole(double a, double b) { // prostokąt
    return a * b;
}

double poleKolo(double r) { // koło
    return 3.14159 * r * r;
}

int main() {
    cout << "Kwadrat 3x3: " << pole(3) << endl;
    cout << "Prostokat 3x4: " << pole(3, 4) << endl;
    cout << "Kolo r=2: " << poleKolo(2) << endl;
    return 0;
}
