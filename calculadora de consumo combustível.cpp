#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	int desl=0, lcomb=0, cons=0;
	cout << "Digite a dist�ncia percorrida em Km: ";
	cin >> desl;
	cout << "Digite a quantidade em litros de combust�vel que foi gasto: ";
	cin >> lcomb;
	cons=desl/lcomb;
	system ("cls");
	cout << "O consumo do ve�culo � de " << cons << "Km/l.";
}
