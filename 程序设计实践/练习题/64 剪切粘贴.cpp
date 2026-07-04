#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        int cutStart, cutEnd;
        string before, after;
        scanf("%d %d", &cutStart, &cutEnd);
        cin >> before >> after;
        
        string clipboard = s.substr(cutStart - 1, cutEnd - cutStart + 1);
        s.erase(cutStart - 1, cutEnd - cutStart + 1);
        
        string searchStr = before + after;
        size_t pos = s.find(searchStr);
        if (pos != string::npos) {
            s.insert(pos + before.size(), clipboard);
        } else {
            s += clipboard;
        }
    }
    
    cout << s << endl;
    return 0;
}