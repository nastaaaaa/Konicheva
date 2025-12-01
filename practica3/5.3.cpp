#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x, min_val = INT_MAX, max_val = INT_MIN;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x < min_val) min_val = x;
        if (x > max_val) max_val = x;
    }

    cout << min_val << " " << max_val << endl;
    return 0;
}