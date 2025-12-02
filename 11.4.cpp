#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fl;

    for (int i = 5; i >= 1; i--) {
        fl.insert_after(fl.before_begin(), i);
    }

    for (int x : fl) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}