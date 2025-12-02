#include <iostream>
using namespace std;

template <typename T>
T sumArray(T* arr, int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << sumArray(arr, 5) << endl;  // 15

    double arrD[] = {1.1, 2.2, 3.3};
    cout << sumArray(arrD, 3) << endl; // 6.6

    return 0;
}