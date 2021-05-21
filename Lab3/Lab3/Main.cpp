#include <iostream>
#include <cstdlib>
#include <clocale>
#include "Algorithms.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a = 1, b = 4;
	double eps = 0.000001;

	std::cout << "Симпсон:" << std::endl;
	std::cout << "n = 1: " << Simpson(a, b, 0) << std::endl;
	std::cout << "n = 50: " << n_Simpson(50, a, b, 0) << std::endl;
	std::cout << std::endl;
	std::cout << "Трапеция:" << std::endl;
	std::cout << "n = 1: " << Trapezoid(a, b, 0) << std::endl;
	std::cout << "n = 50: " << n_Trapezoid(50, a, b, 0) << std::endl;
	std::cout << std::endl;
	std::cout << "Прямоугольник:" << std::endl;
	std::cout << "n = 1: " << Rectangle(a, b, 0) << std::endl;
	std::cout << "n = 50: " << n_Rectangle(50, a, b, 0) << std::endl;
	std::cout << std::endl;
	std::cout << "Адаптивный метод Симпсона:" << std::endl;
	std::cout << "Eps = 0.000001: " << Adaptive_Simpson(a, b, 0, eps) << std::endl;
	std::cout << std::endl;
	std::cout << "Адаптивный метод трапеций:" << std::endl;
	std::cout << "Eps = 0.000001: " << Adaptive_Trapezoid(a, b, 0, eps) << std::endl;
	std::cout << std::endl;
	std::cout << "Адаптивный метод прямоугольников:" << std::endl;
	std::cout << "Eps = 0.000001: " << Adaptive_Rectangle(a, b, 0, eps) << std::endl;
	std::cout << std::endl;
	std::cout << "Ответ: 4.38629436" << std::endl;

	system("pause");
	return 0;
}