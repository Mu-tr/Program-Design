#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        if (C == A * B) {
            printf("Lv Yan\n");
        } else if (C == A + B) {
            printf("Tu Dou\n");
        } else {
            printf("zhe du shi sha ya!\n");
        }
    }
    return 0;
}
