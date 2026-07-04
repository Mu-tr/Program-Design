#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    vector<int> seq(N);
    for (int i = 0; i < N; i++) scanf("%d", &seq[i]);
    
    for (int op = 0; op < M; op++) {
        int type;
        scanf("%d", &type);
        int L = (int)seq.size();
        
        if (type == 1) {
            int L1;
            scanf("%d", &L1);
            vector<int> findSeq(L1);
            for (int i = 0; i < L1; i++) scanf("%d", &findSeq[i]);
            
            int L2;
            scanf("%d", &L2);
            vector<int> replaceSeq(L2);
            for (int i = 0; i < L2; i++) scanf("%d", &replaceSeq[i]);
            
            int pos = -1;
            for (int i = 0; i <= L - L1; i++) {
                bool match = true;
                for (int j = 0; j < L1; j++) {
                    if (seq[i + j] != findSeq[j]) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    pos = i;
                    break;
                }
            }
            
            if (pos != -1) {
                vector<int> newSeq;
                for (int i = 0; i < pos; i++) newSeq.push_back(seq[i]);
                for (int i = 0; i < L2; i++) newSeq.push_back(replaceSeq[i]);
                for (int i = pos + L1; i < L; i++) newSeq.push_back(seq[i]);
                seq = newSeq;
            }
        } else if (type == 2) {
            vector<int> newSeq;
            newSeq.push_back(seq[0]);
            for (int i = 0; i < L - 1; i++) {
                if ((seq[i] + seq[i+1]) % 2 == 0) {
                    newSeq.push_back((seq[i] + seq[i+1]) / 2);
                }
                newSeq.push_back(seq[i+1]);
            }
            seq = newSeq;
        } else if (type == 3) {
            int l, r;
            scanf("%d %d", &l, &r);
            l--; r--;
            while (l < r) {
                swap(seq[l], seq[r]);
                l++;
                r--;
            }
        }
    }
    
    for (int i = 0; i < (int)seq.size(); i++) {
        if (i > 0) printf(" ");
        printf("%d", seq[i]);
    }
    printf("\n");
    return 0;
}