#include <iostream>
using namespace std;

enum Miesiac { Styczen, Luty, Marzec, Kwiecien, Maj, Czerwiec, Lipiec, Sierpien, Wrzesien, Pazdziernik, Listopad, Grudzien };

int main() {
    Miesiac m = Maj;
    cout << "Miesiac nr " << m+1 << endl;
    return 0;
}
