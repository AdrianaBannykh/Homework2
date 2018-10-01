#include<iostream>
using namespace std;

/*
Банных Адрианы
Реализовать функцию возведения числа a в степень b:
a. Без рекурсии.
b. Рекурсивно.
c. *Рекурсивно, используя свойство чётности степени.
*/
void Building(int basis, int degree)
{
	double result;
	if (basis == 0 and degree == 0)
	{
		result = 0;
		cout << result;
	}
	if (basis == 0 && degree >0)
	{
		result = 0;
		cout << result;
	}

	if (degree == 0 && basis >0)
	{
		result = 1;
		cout << result;
	}
	if (degree < 0 && basis>0)
	{
		degree = abs(degree);
		result = 1 / pow(basis, degree);
		cout << result;
	}
	if (basis < 0)
	{
		if (basis % 2 == 1)
		{
			result = -pow(basis, degree);
			cout << result;
		}
		else
		{
			result = pow(basis, degree);
			cout << result;
		}
	}
	if (basis > 0 && degree > 0)
	{
		result = pow(basis, degree);
		cout << result;
	}
}

double Recursion(int a, int b)
{
	double result;
	if (b == 0 && a>0)
	{
		return 1;
	}
	if (a == 0)
	{
		return 0;
	}
	if (b < 0)
	{
		return (1/ (double)a)*Recursion((double)a, b+1);
	}
	if (a < 0)
	{
		if (b % 2 == 1)
		{
			return -abs(a) * Recursion(abs(a), b - 1);
		}
		else
		{
			return abs(a)*Recursion(abs(a),b-1);
		}
	}
	if (a > 0 && b > 0)
	{
		return a * Recursion(a, b-1);
	}
}
void main()
{
	int basis;
	int degree;
	cout << " Enter basis" << endl;
	cin >> basis;
	cout << "Enter degree" << endl;
	cin >> degree;
	Building(basis,degree);
	cout << endl;
	cout << Recursion(basis, degree);
	system("pause");
}