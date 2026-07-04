#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);
    double price[101];
    int count[101] = {0};
    for (int i = 1; i <= N; i++) {
        scanf("%lf", &price[i]);
    }
    double total = 0;
    while (true) {
        int type, num;
        scanf("%d %d", &type, &num);
        if (type == 0) break;
        count[type] += num;
        total += price[type] * num;
    }
    for (int i = 1; i <= N; i++) {
        printf("%d\n", count[i]);
    }
    printf("%.2f\n", total);
    return 0;
}