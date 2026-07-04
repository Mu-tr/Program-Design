#include <cstdio>

int main() {
    int ban, accompany, age1, age2;
    scanf("%d %d %d %d", &ban, &accompany, &age1, &age2);
    
    bool can1, can2;
    bool child1 = age1 < ban, child2 = age2 < ban;
    bool adult1 = age1 >= accompany, adult2 = age2 >= accompany;
    
    if (child1) {
        can1 = adult2;
    } else {
        can1 = true;
    }
    if (child2) {
        can2 = adult1;
    } else {
        can2 = true;
    }
    
    printf("%d-%c %d-%c\n", age1, can1 ? 'Y' : 'N', age2, can2 ? 'Y' : 'N');
    
    if (can1 && can2) {
        if ((child1 && adult2) || (child2 && adult1)) {
            if (child1 && adult2) {
                printf("qing 2 zhao gu hao 1\n");
            } else {
                printf("qing 1 zhao gu hao 2\n");
            }
        } else {
            printf("huan ying ru guan\n");
        }
    } else if (!can1 && !can2) {
        printf("zhang da zai lai ba\n");
    } else {
        if (can1) {
            printf("1: huan ying ru guan\n");
        } else {
            printf("2: huan ying ru guan\n");
        }
    }
    
    return 0;
}