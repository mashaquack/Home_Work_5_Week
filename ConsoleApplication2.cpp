/*Еременко Мария Михайловна
Задание:Вывести на экран фигуры заполненные звездочками. Диалог с пользователем реализовать при помощи меню.*/

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void FirstFigure();
void SecondFigure();
void ThirdFigure();
void FourthFigure();
void FifthFigure();
void SixthFigure();
void SeventhFigure();
void EighthFigure();
void NinthFigure();
void TenthFigure();



int main()
{
	setlocale(LC_ALL, "ru");
	int choise;
	cout << "Вывожу на экран фигуры из звёздочек\n";
	cout << "Выбери число от 1 до 10\n";
	cin >> choise;

	switch (choise) {
	case 1:
		FirstFigure();
		break;

	case 2:
		SecondFigure();
		break;

	case 3:
		ThirdFigure();
		break;

	case 4:
		FourthFigure();
		break;

	case 5:
		FifthFigure();
		break;

	case 6:
		SixthFigure();
		break;

	case 7:
		SeventhFigure();
		break;

	case 8:
		EighthFigure();
		break;

	case 9:
		NinthFigure();
		break;

	case 10:
		TenthFigure();
		break;
	}
	


	

	
}

void FirstFigure() {
	int maxStars = 5;//максимальное кол-во звёзд
	int i, j, k;
	for (i = maxStars; i >= 1; i--) {
		for (j = maxStars - 1; j >= i; j--) {
			cout << " ";
		}
		for (k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}
	
}

void SecondFigure() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void ThirdFigure() {
	int height = 4;//рост пирамиды
	int maxStars = height * 2 - 1;//максимальное кол-во звёздочек
	int space = height - 1;
	int i, j, k;

	for (int i = height; i >= 1; i--) {
		for (int j = space; j >= i; j--) {
			cout << " ";
		}
		for (int k = 1; k <= maxStars; k++) {
			cout << "*";
		}
		maxStars -= 2;
		cout << endl;
	}
}

void FourthFigure() {
	int minStars = 1;
	int height = 4;
	int space = height - 1;
	int i, j, k;

	for (i = 0; i < height; i++) {
		for (j = space; j > i; j--) {
			cout << " ";
		}
		for (k = 0; k < minStars; k++) {
			cout<<"*";
		}
		minStars += 2;
		cout << endl;
	}
}

void FifthFigure() {
	ThirdFigure();
	FourthFigure();
}

void SixthFigure() {
	int size = 7;
	int i, j;
	int px = 1;
	for (i = 1; i <= size; i++) {
		for (j = 1; j <= size; j++) {
			if (j <= px || j >= size - px + 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		if (i <= size / 2)
			px++;
		else
			px--;
		cout << endl;
	}
}

void SeventhFigure() {
	int size = 3;
	for (int i = size; i >=-size; i--) {
		for (int j = size; j >=abs(i); j--) {
			cout << "*";
		}
		cout << endl;
	}
}

void EighthFigure() {
	int size = 3;
	int i, j, k;
	for (int i = size; i >= -size; i--) {
		for (int j = 1; j <= abs(i); j++) {
			cout << " ";
		}
		for (int k = size; k >= abs(i); k--) {
			cout << "*";
		}
		cout << endl;
	}
}

void NinthFigure() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 5; j >= i; j--) {
			cout << "*";
		}
		cout << endl;
	}
}

void TenthFigure() {
	int size = 5;
	int i, j, k;
	for (int i = 1; i <= size; i++) {
		for (int j = size - 1; j >= i; j--) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}
}
