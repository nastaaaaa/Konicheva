#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 10;
    swapValues(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    double x = 1.5, y = 3.7;
    swapValues(x, y);
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}