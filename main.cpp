#include<iostream>
using namespace std;

/*
Ѕанных јдрианы
–еализовать функцию перевода чисел из дес€тичной системы в двоичную, использу€
рекурсию.
*/
void Del(int number)
{
	int ostatok=0;
	int i = 0;
	int*mas = new int[10];
	if (number > 0)
	{
		ostatok = number % 2;
		number = number / 2;
		mas[i] = ostatok;
		Del(number);	
		cout << mas[i];
	}
}

void main()
{
	int number;
	cout << "Enter number: " << endl;
	cin >> number;
	Del(number);
	system("pause");
}