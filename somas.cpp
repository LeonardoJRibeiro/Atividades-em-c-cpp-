#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	int val1, val2;
	setlocale (LC_ALL, "portuguese");
	cout << "Digite o 1� n�mero: ";
	cin >> val1;
	cout << "Digite o 2� n�mero: ";
	cin >> val2;
	val1 ++;
	val2+=10;
	cout << "\nO resultado de valor 1 �: " << val1 << "\nO resultado de valor 2 �: " <<  val2;
	val1++;
	val2+=10;
	cout << "\nO resultado de valor 1 �: " << val1 << "\nO resultado de valor 2 �: " <<  val2;
	return 0;
	system ("pause");
}
