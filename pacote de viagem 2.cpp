#include <iostream>
#include <locale.h>

using namespace std;

main()
{
	setlocale (LC_ALL, "portuguese");
	int idade=0, interesse=0, ninteresse=0, interesse30=0, interessem30=0, i=0, vd=0;
	char escolha;
	for(i=1;i<=100;i++){
		system ("cls");
		cout << "A quantidade de pessoas que tem interresse no pacote de viagem �: " << interesse << ".";
		cout << "\nA quantidade de pessoas que n�o tem interesse no pacote de viagem �: " << ninteresse << ".";
		cout << "\nA quantidade de pessoas maiores de 30 anos que tem interresse no pacote de viagem �: " << interesse30 << ".";
		cout << "\nA quantidade de pessoas menores de 30 anos que tem interresse no pacote de viagem �: " << interessem30 << ".\n\n";
		cout << "Digite a idade da " << i << "� pessoa: ";
		cin >> idade;
		cout << "A " << i << "� pessoa tem interesse em viajar para Lua? (S/N) ";
		vd=0;
		while (vd==0){
			cin >> escolha;
			if (escolha=='s' || escolha=='S' || escolha=='n' || escolha=='N'){
				vd=1;
			}
			else{
				cout << "Digite uma op��o v�lida! ";
			}
		}
		if (escolha=='s' || escolha== 'S')
			interesse++;
		if (escolha=='n' || escolha== 'N')
			ninteresse++;
		if(idade>=30){
			if (escolha=='s' || escolha== 'S'){
			interesse30++;
			}
		}
		else{
			if (escolha=='s' || escolha== 'S'){
			interessem30++;
			}
		}
	}
}
