#include <iostream>

int main() {
	double x, y;
	int q = 0;
	
	std::cin >> x >> y; 
	
	while (x < y)
	{
		q = q++;
		x = x + x * 0.1;
		
	}
	
	std::cout << q;
}