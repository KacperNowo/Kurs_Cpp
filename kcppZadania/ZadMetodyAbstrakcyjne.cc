#include <iostream>
#include <cmath>
using namespace std;

class Figura {
public:
    virtual double obwod() = 0;
    virtual double pole() = 0;
    virtual ~Figura() {}
};

class Kwadrat : public Figura {
    double a;
public:
    Kwadrat(double x) : a(x) {}
    double obwod() override { return 4 * a; }
    double pole() override { return a * a; }
};

class Trojkat : public Figura {
    double a, h;
public:
    Trojkat(double x, double y) : a(x), h(y) {}
    double obwod() override { return 3 * a; }
    double pole() override { return 0.5 * a * h; }
};

class Prostokat : public Figura {
    double a, b;
public:
    Prostokat(double x, double y) : a(x), b(y) {}
    double obwod() override { return 2 * (a + b); }
    double pole() override { return a * b; }
};

class Kolo : public Figura {
    double r;
public:
    Kolo(double x) : r(x) {}
    double obwod() override { return 2 * M_PI * r; }
    double pole() override { return M_PI * r * r; }
    double Dystans(double metr) { return sqrt(metr / M_PI); }
};

int main() {
    Kwadrat k(4);
    Trojkat t(3, 4);
    Prostokat p(5, 6);
    Kolo o(2);

    cout << "Kwadrat obwod: " << k.obwod() << ", pole: " << k.pole() << endl;
    cout << "Trojkat obwod: " << t.obwod() << ", pole: " << t.pole() << endl;
    cout << "Prostokat obwod: " << p.obwod() << ", pole: " << p.pole() << endl;
    cout << "Kolo obwod: " << o.obwod() << ", pole: " << o.pole() << endl;
    cout << "Dystans dla 4m2: " << o.Dystans(4) << endl;

    return 0;
}
