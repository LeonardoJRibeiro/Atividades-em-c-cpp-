#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	float imc=0, peso=0, altura=0;
	cout << "Digite o seu peso em quilos: ";
	cin >> peso;
	cout << "Digite a sua altura em metros: ";
	cin >> altura;
	imc=peso/(altura*altura);
	cout << "Seu IMC é: " << imc << " Sua classifição é: ";
	if (imc<16)
		cout << "Magreza grave.";
	if (imc>=16 && imc<17)
		cout << "Magreza moderada.";
	if (imc>=17 && imc<18.5)
		cout << "Magreza leve.";
	if (imc>=18.5 && imc<25)
		cout << "Saudável.";
	if (imc>=25 && imc<30)
		cout << "Sobrepeso.";
	if (imc>=30 && imc<35)
		cout << "Obesidade grau I.";
	if (imc>=35 && imc<40)
		cout << "Obesidade grau II (Severa).";
	if (imc>=40)
		cout << "Obesidade grau III (mórbida).";
}
