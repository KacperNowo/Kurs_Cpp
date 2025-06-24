#include <iostream>
using namespace std;

union Unia {
    int i;
    float f;
};

int main() {
    Unia u;
    u.i = 42;
    cout << u.i << " " << u.f << endl;
    u.f = 3.14f;
    cout << u.i << " " << u.f << endl;
    return 0;
}
