#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int score[26];
    for (int i = 0; i < 26; i++) scanf("%d", &score[i]);
    
    int cnt[26] = {0};
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            cnt[c - 'a']++;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        if (i > 0) printf(" ");
        printf("%d", cnt[i]);
    }
    printf("\n");
    
    long long total = 0;
    for (int i = 0; i < 26; i++) {
        total += (long long)cnt[i] * score[i];
    }
    printf("%lld\n", total);
    return 0;
}