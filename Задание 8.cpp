// Задание 8.cpp 
//Пользователь вводит два целых числа. Необходимо вывести все целые числа, на
//которые оба введенных числа делятся без остатка.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int number1, number2;
	cout << "Введите два любых целых числа\n";
	cout << "1: "; cin >> number1;
	cout << "2: "; cin >> number2;

	if (number1 > number2)
	{
		for (int i = 1; i <= number1; i++)
		{
			if (number1%i == 0 && number2%i == 0) {
				cout << i << " ";
			}
		}
	}
	else if (number1 < number2)
	{
		for (int i = 1; i <= number2; i++)
		{
			if (number1%i == 0 && number2%i == 0) {
				cout << i << " ";
			}
		}
	}
}