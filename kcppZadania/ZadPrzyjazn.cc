#include <iostream>
using namespace std;

class A;

class B {
public:
    void pokazA(A& a);
};

class A {
private:
    int x = 5;
    friend class B;
public:
    int y = 10;
};

void B::pokazA(A& a) {
    cout << "x = " << a.x << ", y = " << a.y << endl;
}

int main() {
    A a;
    B b;
    b.pokazA(a);
    return 0;
}
