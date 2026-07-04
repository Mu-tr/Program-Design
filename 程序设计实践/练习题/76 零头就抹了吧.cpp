#include <cstdio>

int main() {
    long long N;
    scanf("%lld", &N);
    long long result = 1;
    while (result * 2 <= N) {
        result *= 2;
    }
    printf("%lld\n", result);
    return 0;
}