#include <iostream>
using namespace std;

long long silnia(int n) {
    long long s = 1;
    for(int i = 1; i <= n; i++) s *= i;
    return s;
}

int main() {
    int n;
    cin >> n;
    if(n < 0) { cout << "Podaj liczbe >= 0" << endl; return 0; }
    cout << "Silnia: " << silnia(n) << endl;
    long long suma = 0;
    for(int i = 1; i <= n; i++) suma += silnia(i);
    cout << "Suma silni od 1 do n: " << suma << endl;
    return 0;
}
