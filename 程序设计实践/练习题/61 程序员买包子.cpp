#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M, K;
    string X;
    cin >> N >> X >> M >> K;
    if (K == N) {
        cout << "mei you mai " << X << " de" << endl;
    } else if (K == M) {
        cout << "kan dao le mai " << X << " de" << endl;
    } else {
        cout << "wang le zhao mai " << X << " de" << endl;
    }
    return 0;
}