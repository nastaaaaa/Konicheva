#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));

    int n;
    std::cin >> n;

    int* a = new int[n];
    long long s = 0;

    for (int i = 0; i < n; ++i) {
        a[i] = std::rand() % 100;
        s += a[i];
    }

    for (int i = 0; i < n; ++i) {
        if (i) std::cout << ' ';
        std::cout << a[i];
    }
    std::cout << '\n';

    std::cout << (double)s / n << '\n';

    delete[] a;
    return 0;
}