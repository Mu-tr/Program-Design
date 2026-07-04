#include <cstdio>
#include <set>
using namespace std;

int main() {
    int N, M, Q;
    scanf("%d %d %d", &N, &M, &Q);
    set<int> rows, cols;
    for (int i = 0; i < Q; i++) {
        int t, c;
        scanf("%d %d", &t, &c);
        if (t == 0) rows.insert(c);
        else cols.insert(c);
    }
    long long safe_rows = N - (int)rows.size();
    long long safe_cols = M - (int)cols.size();
    printf("%lld\n", safe_rows * safe_cols);
    return 0;
}