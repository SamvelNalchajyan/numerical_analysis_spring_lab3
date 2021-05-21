#pragma once
#define _USE_MATH_DEFINES
#include <cmath>

double function_f_x(double x)
{
	return (x + 1) / x;
}

double function_f_plus_cos10x(double x)
{
	return function_f_x(x) + cos(10.0 * x);
}

double function_f_plus_cos100x(double x)
{
	return function_f_x(x) + cos(100.0 * x);
}

double Simpson(double a, double b, int id)
{
	double I = 0;
	double h = (b - a) / 2.0;
	switch (id)
	{
	case 0:
	{
		I = (h / 3.0) * (function_f_x(a) + 4 * function_f_x(a + h) + function_f_x(b));
		break;
	}
	case 1:
	{
		I = (h / 3.0) * (function_f_plus_cos10x(a) + 4 * function_f_plus_cos10x(a + h) + function_f_plus_cos10x(b));
		break;
	}
	case 2:
	{
		I = (h / 3.0) * (function_f_plus_cos100x(a) + 4 * function_f_plus_cos100x(a + h) + function_f_plus_cos100x(b));
		break;
	}
	}
	return I;
}

double n_Simpson(int n, double a, double b, int id)
{
	double h = (b - a) / n;
	double x = a;
	double I = 0;
	for (int i = 0; i < n; i++)
	{
		I += Simpson(x, x + h, id);
		x += h;
	}
	return I;
}

double Trapezoid(double a, double b, int id)
{
	double I = 0;
	double h = (b - a);
	switch (id)
	{
	case 0:
	{
		I = (h / 2.0) * (function_f_x(a) + function_f_x(b));
		break;
	}
	case 1:
	{
		I = (h / 2.0) * (function_f_plus_cos10x(a) + function_f_plus_cos10x(b));
		break;
	}
	case 2:
	{
		I = (h / 2.0) * (function_f_plus_cos100x(a) + function_f_plus_cos100x(b));
		break;
	}
	}
	return I;
}

double n_Trapezoid(int n, double a, double b, int id)
{
	double h = (b - a) / n;
	double x = a;
	double I = 0;
	for (int i = 0; i < n; i++)
	{
		I += Trapezoid(x, x + h, id);
		x += h;
	}
	return I;
}

double Rectangle(double a, double b, int id)
{
	double I = 0;
	double h = (b - a);
	double mid = (a + b) / 2.0;
	switch (id)
	{
	case 0:
	{
		I = h * function_f_x(mid);
		break;
	}
	case 1:
	{
		I = h * function_f_plus_cos10x(mid);
		break;
	}
	case 2:
	{
		I = h * function_f_plus_cos100x(mid);
		break;
	}
	}
	return I;
}

double n_Rectangle(int n, double a, double b, int id)
{
	double h = (b - a) / n;
	double x = a;
	double I = 0;
	for (int i = 0; i < n; i++)
	{
		I += Rectangle(x, x + h, id);
		x += h;
	}
	return I;
}

double Adaptive_Simpson(double a, double b, int id, double eps)
{
	double mid = (a + b) / 2.0;
	double I = Simpson(a, b, id);
	double I_left = Simpson(a, mid, id);
	double I_right = Simpson(mid, b, id);
	if (fabs(I_left + I_right - I) >= eps)
	{
		I = Adaptive_Simpson(a, mid, id, eps / 2.0) + Adaptive_Simpson(mid, b, id, eps / 2.0);
	}
	return I;
}

double Adaptive_Trapezoid(double a, double b, int id, double eps)
{
	double mid = (a + b) / 2.0;
	double I = Trapezoid(a, b, id);
	double I_left = Trapezoid(a, mid, id);
	double I_right = Trapezoid(mid, b, id);
	if (fabs(I_left + I_right - I) >= eps)
	{
		I = Adaptive_Trapezoid(a, mid, id, eps / 2.0) + Adaptive_Trapezoid(mid, b, id, eps / 2.0);
	}
	return I;
}

double Adaptive_Rectangle(double a, double b, int id, double eps)
{
	double mid = (a + b) / 2.0;
	double I = Rectangle(a, b, id);
	double I_left = Rectangle(a, mid, id);
	double I_right = Rectangle(mid, b, id);
	if (fabs(I_left + I_right - I) >= eps)
	{
		I = Adaptive_Rectangle(a, mid, id, eps / 2.0) + Adaptive_Rectangle(mid, b, id, eps / 2.0);
	}
	return I;
}