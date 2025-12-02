#include <iostream>
#include <array>
#include <numeric>
#include <iomanip>
using namespace std;

int main() {
    array<int, 10> arr;

    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }

    int sum = accumulate(arr.begin(), arr.end(), 0);
    double average = static_cast<double>(sum) / arr.size();

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}