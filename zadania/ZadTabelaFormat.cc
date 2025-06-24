#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "| " << left << setw(15) << "Nazwa" << "| " << right << setw(8) << "Cena" << " | " << setw(7) << "Ilosc" << " |" << endl;
    cout << "|" << setfill('-') << setw(17) << "|" << setw(10) << "|" << setw(9) << "|" << setfill(' ') << endl;
    cout << "| " << left << setw(15) << "Chleb" << "| " << right << setw(8) << fixed << setprecision(2) << 4.99 << " | " << setw(7) << 5 << " |" << endl;
    cout << "| " << left << setw(15) << "Mleko" << "| " << right << setw(8) << 3.20 << " | " << setw(7) << 10 << " |" << endl;
    cout << "| " << left << setw(15) << "Jajka (10 szt)" << "| " << right << setw(8) << 8.50 << " | " << setw(7) << 3 << " |" << endl;
    return 0;
}
