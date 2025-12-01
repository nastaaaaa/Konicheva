#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int n;
    cin >> n;

    double *arr = new double[n];

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        int j = rand() % n;
        double temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << sum << endl;

    delete[] arr;

    return 0;
}