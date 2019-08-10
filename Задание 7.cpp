// Задание 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Пользователь вводит целое число. Необходимо вывести все целые числа, на которое
//заданное число делиться без остатка.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int userNumber;
	cout << "Введите любое целое число\n";
	cin >> userNumber;
	for ( int i = 1; i <=userNumber; i++) {
		if (userNumber%i == 0) {
			cout << i<<" ";
		}
	}
}


