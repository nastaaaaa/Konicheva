#include <iostream>
#include <string>
using namespace std;

int countSymbols(string s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    string input;
    getline(cin, input);
    cout << countSymbols(input) << endl;
    return 0;
}