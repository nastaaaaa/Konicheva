#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool areEqualIgnoreCase(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (int i = 0; i < s1.length(); i++) {
        if (tolower(s1[i]) != tolower(s2[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    cout << (areEqualIgnoreCase(a, b) ? "true" : "false") << endl;
    return 0;
}