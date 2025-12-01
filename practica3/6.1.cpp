#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> st;

    for (int i = 0; i < n; i++) {
        int pair_num;
        cin >> pair_num;

        if (!st.empty() && st.top() == pair_num) {
            st.pop();
        } else {
            st.push(pair_num);
        }
    }

    int went = n - st.size();
    cout << went << endl;

    return 0;
}