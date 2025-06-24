#include <iostream>
using namespace std;

bool bit(int n) { return (n & 1) == 0; }
bool mod(int n) { return n % 2 == 0; }
bool war(int n) { return (n % 2 == 0) ? true : false; }

int main() {
    int n; cin >> n;
    cout << bit(n) << " " << mod(n) << " " << war(n) << endl;
    return 0;
}
