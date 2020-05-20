#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	int desl=0, lcomb=0, cons=0;
	cout << "Digite a distância percorrida em Km: ";
	cin >> desl;
	cout << "Digite a quantidade em litros de combustível que foi gasto: ";
	cin >> lcomb;
	cons=desl/lcomb;
	system ("cls");
	cout << "O consumo do veículo é de " << cons << "Km/l.";
}
