#include "../include/Zad5.h"
#include <iostream>
using namespace std;

void Zad5::run() {
    cout << "\n=== Zadanie 5 - Zamiana miejscami (wskazniki) ===" << endl;
    
    int a = 5, b = 10;
    cout << "Przed zamiana (int): a = " << a << ", b = " << b << endl;
    zamien(&a, &b);
    cout << "Po zamianie (int): a = " << a << ", b = " << b << endl;
    
    double x = 3.14, y = 2.71;
    cout << "\nPrzed zamiana (double): x = " << x << ", y = " << y << endl;
    zamien(&x, &y);
    cout << "Po zamianie (double): x = " << x << ", y = " << y << endl;
    
    int num1, num2;
    cout << "\nPodaj pierwsza liczbe calkowita: ";
    cin >> num1;
    cout << "Podaj druga liczbe calkowita: ";
    cin >> num2;
    
    cout << "Przed zamiana: " << num1 << ", " << num2 << endl;
    zamien(&num1, &num2);
    cout << "Po zamianie: " << num1 << ", " << num2 << endl;
}

void Zad5::zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Zad5::zamien(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}
