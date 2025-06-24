#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;
    ss << 123 << " test " << 4.56;
    string s = ss.str();
    cout << s << endl;
    int x;
    double y;
    string t;
    stringstream ss2("42 abc 3.14");
    ss2 >> x >> t >> y;
    cout << x << " " << t << " " << y << endl;
    return 0;
}
