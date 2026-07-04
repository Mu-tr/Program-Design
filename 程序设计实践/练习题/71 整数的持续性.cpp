#include <cstdio>
#include <vector>
using namespace std;

int persistence(long long n) {
    int steps = 0;
    while (n >= 10) {
        long long prod = 1;
        while (n > 0) {
            prod *= n % 10;
            n /= 10;
        }
        n = prod;
        steps++;
    }
    return steps;
}

int main() {
    int L, R;
    scanf("%d %d", &L, &R);
    
    int maxPer = 0;
    vector<int> results;
    
    for (int i = L; i <= R; i++) {
        int p = persistence(i);
        if (p > maxPer) {
            maxPer = p;
            results.clear();
            results.push_back(i);
        } else if (p == maxPer) {
            results.push_back(i);
        }
    }
    
    printf("%d\n", maxPer);
    for (int i = 0; i < (int)results.size(); i++) {
        if (i > 0) printf(" ");
        printf("%d", results[i]);
    }
    printf("\n");
    return 0;
}