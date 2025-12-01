#include <iostream>

int main() {
	
	int a, b;
	char oper;
	
	std::cin << a;
	std::cin << b;
	std::cin << oper;
	
	switch (oper) {
		case '+':
			result = "a + b";
			break;
		case '-':
			result = "a - b";
			break;
		case '*':
			result = "a * b";
			break;
		case '/':
			result = "a /b";
		default:
		 result = 0;
	}
	
	std::cout << result << "\n"
}