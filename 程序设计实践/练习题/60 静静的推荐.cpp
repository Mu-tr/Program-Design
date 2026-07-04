#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N, K, S;
    scanf("%d %d %d", &N, &K, &S);
    
    map<int, int> reg_count;
    map<int, int> pat_count;
    
    for (int i = 0; i < N; i++) {
        int g, p;
        scanf("%d %d", &g, &p);
        if (g >= 175) {
            if (p >= S) {
                pat_count[g]++;
            } else {
                reg_count[g]++;
            }
        }
    }
    
    int total = 0;
    for (auto& [score, rc] : reg_count) {
        int pc = pat_count[score];
        total += min(rc, K) + pc;
    }
    for (auto& [score, pc] : pat_count) {
        if (reg_count.find(score) == reg_count.end()) {
            total += pc;
        }
    }
    
    printf("%d\n", total);
    return 0;
}