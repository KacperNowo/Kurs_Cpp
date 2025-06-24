#include <iostream>
using namespace std;

int main() {
    int tab[10] = {0};
    int* p1 = &tab[2];
    int* p2 = &tab[7];
    cout << "Różnica: " << p2 - p1 << " elementów" << endl;
    return 0;
}
