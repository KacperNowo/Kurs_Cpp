#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string imie, nazwisko;
    int indeks;
};

vector<Student> studenci;

void dodaj() {
    Student s;
    cin >> s.imie >> s.nazwisko >> s.indeks;
    for(auto& x : studenci) if(x.indeks == s.indeks) return;
    studenci.push_back(s);
}
void usun() {
    int id; cin >> id;
    studenci.erase(remove_if(studenci.begin(), studenci.end(),
        [id](Student s){return s.indeks==id;}), studenci.end());
}
void lista() {
    for(auto& s : studenci)
        cout << s.imie << " " << s.nazwisko << " " << s.indeks << endl;
}
void sortuj() {
    sort(studenci.begin(), studenci.end(),
        [](Student a, Student b){return a.imie < b.imie;});
}
void sprawdz() {
    int id; cin >> id;
    bool jest = false;
    for(auto& s : studenci) if(s.indeks == id) jest = true;
    cout << (jest ? "TAK" : "NIE") << endl;
}

int main() {
    int op;
    while(cin >> op) {
        if(op==1) dodaj();
        if(op==2) usun();
        if(op==3) lista();
        if(op==4) sortuj();
        if(op==5) sprawdz();
        if(op==0) break;
    }
    return 0;
}
