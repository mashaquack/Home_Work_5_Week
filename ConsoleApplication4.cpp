/*Еременко Мария Михайловна
Подсчитать количество целых чисел в диапазоне от 100 до 999 у которых все цифры разные*/
#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int quantity = 0;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				if (i != j && k != i && k != j)
				{
					quantity++;
				}
			}
		}
	}
	cout <<"Количество целых чисел в диапазоне от 100 до 999 у которых все цифры разные: " << quantity << endl;
}
