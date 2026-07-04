#include <cstdio>
#include <set>
using namespace std;

bool checkSudoku() {
    int grid[9][9];
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            scanf("%d", &grid[i][j]);
    
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            if (grid[i][j] < 1 || grid[i][j] > 9) return false;
    
    for (int i = 0; i < 9; i++) {
        set<int> s;
        for (int j = 0; j < 9; j++) s.insert(grid[i][j]);
        if (s.size() != 9) return false;
    }
    for (int j = 0; j < 9; j++) {
        set<int> s;
        for (int i = 0; i < 9; i++) s.insert(grid[i][j]);
        if (s.size() != 9) return false;
    }
    for (int bi = 0; bi < 3; bi++) {
        for (int bj = 0; bj < 3; bj++) {
            set<int> s;
            for (int i = bi*3; i < bi*3+3; i++)
                for (int j = bj*3; j < bj*3+3; j++)
                    s.insert(grid[i][j]);
            if (s.size() != 9) return false;
        }
    }
    return true;
}

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        printf("%d\n", checkSudoku() ? 1 : 0);
    }
    return 0;
}