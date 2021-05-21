#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#define MyPi 3.14159265358979

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

double FRand(double min, double max)
{
	double tmp = (double)(rand()) / RAND_MAX;
	return min + tmp * (max - min);
}

double function_dg(double x, double t)
{
	std::vector<double> A;
	std::vector<double> B;
	/*
	for (int i = 0; i < 14; i++)
	{
		A.push_back(FRand(-1, 1));
		B.push_back(FRand(-1, 1));
	}
	*/
	A.push_back(-0.997497);
	A.push_back(0.127171);
	A.push_back(-0.613392);
	A.push_back(0.617481);
	A.push_back(0.170019);
	A.push_back(-0.0402539);
	A.push_back(-0.299417);
	A.push_back(0.791925);
	A.push_back(0.64568);
	A.push_back(0.49321);
	A.push_back(-0.651784);
	A.push_back(0.717887);
	A.push_back(0.421003);
	A.push_back(0.0270699);

	B.push_back(-0.39201);
	B.push_back(-0.970031);
	B.push_back(-0.817194);
	B.push_back(-0.271096);
	B.push_back(-0.705374);
	B.push_back(-0.668203);
	B.push_back(0.97705);
	B.push_back(-0.108615);
	B.push_back(-0.761834);
	B.push_back(-0.990661);
	B.push_back(-0.982177);
	B.push_back(-0.24424);
	B.push_back(0.0633259);
	B.push_back(0.142369);

	//double alpha = FRand(0, 1);
	double alpha = 0.601764;
	

	double dg = 0;
	for (int i = 0; i < 14; i++)
	{
		dg += (A[i] * sin(2 * MyPi * (i + 1) * (alpha - x) * t) + B[i] * cos(2 * MyPi * (i + 1) * (alpha - x) * t));
	}
	return dg;
}

double Simpson_for_task_2(double x, double a, double b)
{
	double I = 0;
	double h = (b - a) / 2.0;
	I = (h / 3.0) * (function_dg(x, a) + 4 * function_dg(x, a + h) + function_dg(x, b));
	return I;
}

double Adaptive_Simpson_for_task_2(double x, double a, double b, double eps)
{
	double mid = (a + b) / 2.0;
	double I = Simpson_for_task_2(x, a, b);
	double I_left = Simpson_for_task_2(x, a, mid);
	double I_right = Simpson_for_task_2(x, mid, b);
	if (fabs(I_left + I_right - I) >= eps)
	{
		I = Adaptive_Simpson_for_task_2(x, a, mid, eps / 2.0) + Adaptive_Simpson_for_task_2(x, mid, b, eps / 2.0);
	}
	return I;
}

double function_g(double x, double eps)
{
	double res = Adaptive_Simpson_for_task_2(x, -MyPi / 2.0, MyPi / 2.0, eps);
	//double res = Simpson_for_task_2(x, -MyPi / 2.0, MyPi / 2.0);
	return res;
}