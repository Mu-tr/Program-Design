#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int awang = 0;
    if (a > 0 && b > 0) awang = max(a, b);
    else if (a > 0) awang = a;
    else if (b > 0) awang = b;
    
    int boss = 0;
    if (a > 0 && b > 0) boss = a + b;
    else if (a > 0 && b < 0) boss = max(0, a - (-b));
    else if (a < 0 && b > 0) boss = max(0, b - (-a));
    
    printf("%d %d\n", awang, boss);
    
    if (awang == 0 && boss == 0) printf("-_-\n");
    else if (boss > awang) printf("^_^\n");
    else printf("T_T\n");
    
    return 0;
}