#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int a[100][100];
    int sum = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
    }

    cout << sum << endl;

    return 0;
}