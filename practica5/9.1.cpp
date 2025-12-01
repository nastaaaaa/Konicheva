#include <iostream>
#include <set>
using namespace std;

void rem(int arr[], int n) {
    set<int> seen;
    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) == seen.end()) {
            cout << arr[i];
            seen.insert(arr[i]);
            if (i < n - 1) {
                cout << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rem(arr, n);
    return 0;
}