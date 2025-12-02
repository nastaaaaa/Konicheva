#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    deque<string> orders;

    orders.push_back("фри");
    orders.push_front("Срочно: Кофе");
    orders.push_back("Бургер");

    while (!orders.empty()) {
        cout << "Выполнен: " << orders.front() << endl;
        orders.pop_front();
    }

    if (orders.empty()) {
        cout << "Все заказы выполнены." << endl;
    } else {
        cout << "Оставшиеся заказы:" << endl;
        for (const string& order : orders) {
            cout << order << endl;
        }
    }

    return 0;
}