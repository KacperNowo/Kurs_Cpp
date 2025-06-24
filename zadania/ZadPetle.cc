#include <iostream>
using namespace std;

void w() { int i = 0; while(i < 5) { cout << i << " "; i++; } cout << endl; }
void dw() { int i = 0; do { cout << i << " "; i++; } while(i < 5); cout << endl; }
void f() { for(int i = 0; i < 5; i++) cout << i << " "; cout << endl; }

int main() { w(); dw(); f(); return 0; }
