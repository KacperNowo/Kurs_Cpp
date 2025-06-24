#include <iostream>
using namespace std;

void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Przed: x=" << x << ", y=" << y << endl;
    zamien(&x, &y);
    cout << "Po: x=" << x << ", y=" << y << endl;
    return 0;
}
