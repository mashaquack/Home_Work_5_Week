/**/


#include <iostream>
#include <ctype.h>

using namespace std;

void main(void)
{
	char buffer[1024]; //Твоя строка которую вводишь
	char Result[1024] = { 0 }; //Результат
	cout << "Input string : ";
	char *ptr = Result; //Указатель на строку Result
	for (int i = 0; i < strlen(buffer); i++) //Обойти всю строку по-символьно
	{
		if (!isdigit((unsigned char)buffer[i])) //Если символ не цифра
			*ptr++ = buffer[i]; //то пишим этот символ в Result и сдвигаем указатель на 1 байт
	}
	cout << endl << "Result : " << Result;

}