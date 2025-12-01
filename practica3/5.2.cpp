#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int even = 0, odd = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        if (x % 2 == 0) ++even;
        else ++odd;
    }

    std::cout << even << " " << odd << std::endl;
    return 0;
}