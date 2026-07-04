#include <cstdio>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int n = A + B;
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    printf("%lld\n", fact);
    return 0;
}