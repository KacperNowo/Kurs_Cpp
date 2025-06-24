#include <iostream>
using namespace std;

bool bit(int n) { return (n & 1) == 0; }
bool mod(int n) { return n % 2 == 0; }
bool war(int n) { return (n % 2 == 0) ? true : false; }

int main() {
    int n, w; cin >> n >> w;
    switch(w) {
        case 1: cout << bit(n) << endl; break;
        case 2: cout << mod(n) << endl; break;
        case 3: cout << war(n) << endl; break;
        default: cout << "zly wybor" << endl;
    }
    return 0;
}
