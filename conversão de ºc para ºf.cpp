#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	float tempc=0, tempf=0, opc=0, vd=0;
	while (vd==0){
		cout << "Digite 1 para converter de �C para �F.\nDigite 2 para converter de �F para �C.\nDigite sua op��o: ";
		cin >> opc;
		system ("cls");
		if (opc==1){
			cout << "Digite a temperatura em �C: ";
			cin >> tempc;
			tempf= (tempc*1.8)+32;
			system ("cls");
			cout << "A temperatura em �C �: " << tempc << ".\nA temperatura em �F �: " << tempf << ".";
			vd=1;
		}
		if (opc==2){
			cout << "Digite a temperatura em �F: ";
			cin >> tempf;
			tempc= (tempf-32)/1.8;
			system ("cls");
			cout << "A temperatura em �F �: " << tempf << ".\nA temperatura em �C �: " << tempc << ".";
			vd=1;
		}
		if (opc!=1 && opc!=2){
			cout << "Digite um n�mero v�lido!\n";
			system ("pause");
			system ("cls");
		}
	}	
}
