#include <iostream>
using namespace std;

class Punkt {
public:
    int x, y;
    Punkt(int xx, int yy) : x(xx), y(yy) {}
    Punkt operator+(const Punkt& p) {
        return Punkt(x + p.x, y + p.y);
    }
};

int main() {
    Punkt a(1, 2);
    Punkt b(3, 4);
    Punkt c = a + b;
    cout << "Punkt c: (" << c.x << ", " << c.y << ")" << endl;
    return 0;
}
