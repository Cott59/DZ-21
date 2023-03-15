#include <iostream>
#include<cstdlib>
#include<ctime>






int main() {
	setlocale(LC_ALL, "Russian");
	double x, y;
	std::cout << " Введите два числа : ";
	std::cin >> x >> y;
	double* px = &x;
	double* py = &y;
	std::cout << " Ср. арифм. = " << (*px + *py) / 2;
	std::cout << "\n\n";











	return 0;
}