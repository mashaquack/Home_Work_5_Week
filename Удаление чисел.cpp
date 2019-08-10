
#include<iostream>
#include <vector>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus"); long long int a, c = 0;
	vector <int> mas;
	cout << "Введите число "; cin >> a;

	for (int i = 0; a != 0; i++)
	{
		mas.push_back(a % 10); a /= 10; c++;
	} cout << endl;
	for (int i = c - 1; i >= 0; i--)
		if (mas[i] != 3&& mas[i]!=6) cout << mas[i]; cout << endl;
	
}






