#include <iostream>
using namespace std;

int suma(int* tab, int rozmiar) {
    int sum = 0;
    for(int i = 0; i < rozmiar; i++) sum += *(tab + i);
    return sum;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    cout << "Suma: " << suma(tab, 5) << endl;
    return 0;
}
