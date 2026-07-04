#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

string process(const string& a) {
    string s = "";
    for (int i = 1; i < (int)a.size(); i++) {
        if ((a[i] - '0') % 2 == (a[i-1] - '0') % 2) {
            s += max(a[i], a[i-1]);
        }
    }
    return s;
}

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    string sa = process(a);
    string sb = process(b);
    if (sa == sb) {
        cout << sa << endl;
    } else {
        cout << sa << endl;
        cout << sb << endl;
    }
    return 0;
}