#include <cstdio>

int main() {
    int dice[6];
    for (int i = 0; i < 6; i++) scanf("%d", &dice[i]);
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < 6; i++) {
        int v = dice[i];
        int avail[5], cnt = 0;
        for (int j = 6; j >= 1; j--) {
            if (j != v) avail[cnt++] = j;
        }
        if (i > 0) printf(" ");
        printf("%d", avail[n - 1]);
    }
    printf("\n");
    return 0;
}