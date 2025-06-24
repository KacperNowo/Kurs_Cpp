#include <iostream>
using namespace std;

class Auto {
public:
    string marka;
    int rok;
    Auto(string m, int r) : marka(m), rok(r) {}
    void pokaz() {
        cout << marka << " z " << rok << endl;
    }
};

int main() {
    Auto a("Opel", 2010);
    a.pokaz();
    return 0;
}
