#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; string s; cin >> n >> s;
    if(s == "bit") cout << ((n & 1) == 0) << endl;
    else if(s == "mod") cout << (n % 2 == 0) << endl;
    else if(s == "war") cout << ((n % 2 == 0) ? 1 : 0) << endl;
    else cout << "zly wybor" << endl;
    return 0;
}
