#include <iostream>
#include <string>

int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "отследить номер студента : ";
	cin >> n;
	double sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 0; i < n; i++) {
		string surname, name;
		int sch1, sch2, sch3;
		cout << "номер студента ${i+1} : ";
		cin >> surname >> name >> sch1 >> sch2 >> sch3;
		sum1 = sum1 + sch1;
		sum2 = sum2 + sch2;
		sum3 = sum + sch3;
	}
	double total1, total2, total3;
	total1 = sum1 / n;
	total2 = sum2 / n;
	total3 = sum3 / n;
	cout << total1 << endl << total2 << endl << total3;
}