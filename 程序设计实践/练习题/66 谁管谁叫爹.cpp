#include <cstdio>

long long digitSum(long long n) {
    long long s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        long long A, B;
        scanf("%lld %lld", &A, &B);
        long long sA = digitSum(A);
        long long sB = digitSum(B);
        
        bool aIsDad = (sB != 0 && A % sB == 0);
        bool bIsDad = (sA != 0 && B % sA == 0);
        
        if (aIsDad && !bIsDad) {
            printf("A\n");
        } else if (bIsDad && !aIsDad) {
            printf("B\n");
        } else {
            if (A > B) printf("A\n");
            else printf("B\n");
        }
    }
    return 0;
}