#include <cstdio>
#include <map>
using namespace std;

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int box[100001];
    for (int i = 1; i <= N; i++) scanf("%d", &box[i]);
    int K;
    scanf("%d", &K);
    for (int i = 0; i < K; i++) {
        map<int, int> cnt;
        int id;
        while (scanf("%d", &id) == 1 && id != 0) cnt[box[id]]++;
        bool first = true;
        for (auto& [b, c] : cnt) {
            if (!first) printf(" ");
            printf("B%d-%d", b, c);
            first = false;
        }
        printf("\n");
    }
    return 0;
}