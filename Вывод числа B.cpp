#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int A = 0;
	cout << "Введите любое целое чило А: ";
	cin >> A;
	cout << "\n\n";
	for (int B = 1; B < a; B++)
	{
		if ((A % (B * B) == 0) && (A % (B * B * B) != 0))
			cout << B << " ";
	}
}

