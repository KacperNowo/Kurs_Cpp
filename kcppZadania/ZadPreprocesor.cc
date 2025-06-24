#include <iostream>
using namespace std;

#define DODAJ(a,b) ((a)+(b))
#define STR(x) #x
#define JOIN(a,b) a##b

int main() {
#ifdef DODAJ
    cout << DODAJ(2,3) << endl;
#endif
#ifndef NIE_MA
    cout << "NIE_MA nie zdefiniowane" << endl;
#endif
    cout << STR(hello) << endl;
    int ab = 7;
    cout << JOIN(a,b) << endl;
    return 0;
}
