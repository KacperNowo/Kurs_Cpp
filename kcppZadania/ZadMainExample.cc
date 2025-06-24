#include <iostream>
using namespace std;

void f1() { cout << "f1" << endl; }
void f2() { cout << "f2" << endl; }
extern "C" void fc1() { cout << "fc1" << endl; }
extern "C" void fc2() { cout << "fc2" << endl; }
void f3() { cout << "f3" << endl; }

int main() {
    f1();
    f2();
    fc1();
    fc2();
    f3();
    return 0;
}
