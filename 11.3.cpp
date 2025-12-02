#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> students = {"Иванов", "Петров", "Сидоров", "Алексеев", "Борисов"};

    students.sort();

    students.remove_if([](const string& s) {
        return s[0] == 'А';
    });

    for (const string& name : students) {
        cout << name << endl;
    }

    return 0;
}