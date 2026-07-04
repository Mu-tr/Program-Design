#include <cstdio>

int main() {
    int N;
    scanf("%d", &N);
    int hat[101];
    for (int i = 0; i < N; i++) scanf("%d", &hat[i]);
    int K;
    scanf("%d", &K);
    for (int i = 0; i < K; i++) {
        int guess[101];
        bool any_wrong = false;
        bool any_correct = false;
        for (int j = 0; j < N; j++) {
            scanf("%d", &guess[j]);
            if (guess[j] != 0 && guess[j] != hat[j]) any_wrong = true;
            if (guess[j] != 0 && guess[j] == hat[j]) any_correct = true;
        }
        if (!any_wrong && any_correct) {
            printf("Da Jiang!!!\n");
        } else {
            printf("Ai Ya\n");
        }
    }
    return 0;
}