#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int N, M;
    cin >> N >> M;

    int a[100][100];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            a[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << a[i][j];
            if (j < M - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}