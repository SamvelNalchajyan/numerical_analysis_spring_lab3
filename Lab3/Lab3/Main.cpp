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
	//------------------------------------------------------------------------------//
	//std::cout << "Функция dg:" << std::endl;
	//double tmp = MyPi / 3.0;
	//std::cout << function_dg(0.5, tmp) << std::endl;
	
	double eps2 = 4;
	std::cout << "Функция g:" << std::endl;
	double h = 0.1;
	double x = 0;
	for (int i = 0; i < 10; i++)
	{
		std::cout << function_g(x, eps2) << "  ";
		x += h;
	}
	std::cout << std::endl;
	

	system("pause");
	return 0;
}