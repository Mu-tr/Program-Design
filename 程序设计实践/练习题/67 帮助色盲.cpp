#include <cstdio>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if (A == 2) {
        printf("-\nstop\n");
    } else if (B == 1) {
        if (A == 0) {
            printf("-\nstop\n");
        } else {
            printf("-\nmove\n");
        }
    } else {
        if (A == 0) {
            printf("biii\nstop\n");
        } else {
            printf("dudu\nmove\n");
        }
    }
    return 0;
}