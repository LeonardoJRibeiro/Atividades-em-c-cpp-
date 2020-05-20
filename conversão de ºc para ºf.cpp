#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	float tempc=0, tempf=0, opc=0, vd=0;
	while (vd==0){
		cout << "Digite 1 para converter de ºC para ºF.\nDigite 2 para converter de ºF para ºC.\nDigite sua opção: ";
		cin >> opc;
		system ("cls");
		if (opc==1){
			cout << "Digite a temperatura em ºC: ";
			cin >> tempc;
			tempf= (tempc*1.8)+32;
			system ("cls");
			cout << "A temperatura em ºC é: " << tempc << ".\nA temperatura em ºF é: " << tempf << ".";
			vd=1;
		}
		if (opc==2){
			cout << "Digite a temperatura em ºF: ";
			cin >> tempf;
			tempc= (tempf-32)/1.8;
			system ("cls");
			cout << "A temperatura em ºF é: " << tempf << ".\nA temperatura em ºC é: " << tempc << ".";
			vd=1;
		}
		if (opc!=1 && opc!=2){
			cout << "Digite um número válido!\n";
			system ("pause");
			system ("cls");
		}
	}	
}
