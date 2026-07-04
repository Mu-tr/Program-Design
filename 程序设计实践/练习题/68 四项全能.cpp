#include <cstdio>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    long long sum = 0;
    for (int i = 0; i < M; i++) {
        int k;
        scanf("%d", &k);
        sum += k;
    }
    long long result = sum - (long long)N * (M - 1);
    if (result < 0) result = 0;
    printf("%lld\n", result);
    return 0;
}