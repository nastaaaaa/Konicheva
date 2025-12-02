#include <iostream>
using namespace std;

template <typename T>
T myMin(T a, T b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << myMin(5, 10) << endl;      // 5
    cout << myMin(3.2, 2.8) << endl;   // 2.8
    cout << myMin('b', 'a') << endl;   // a

    return 0;
}