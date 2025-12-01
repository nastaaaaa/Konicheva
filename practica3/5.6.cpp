#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int n;
    cin >> n;

    int a[10][10];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }

    cout << sum << endl;

    return 0;
}