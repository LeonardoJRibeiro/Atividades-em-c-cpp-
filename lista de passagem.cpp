#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	int i, idade[100], inter=0, ninter=0, tinter=0, mtinter=0;
	char interesse[100];
	for (i=1; i<=5; i++){
		cout << "Digite a idade da " << i << "ª pessoa: ";
		cin >> idade[i];
		cout << "A " << i << "ª pessoa tem interesse em viajar pra Lua? (S/N)";
		cin >> interesse[i];
		if(interesse[i]=='s' || interesse[i]=='S'){
			inter++;
		}
		if(interesse[i]=='n' || interesse[i]=='N'){
			ninter++;
		}
		if(idade[i]>=30){
			if(interesse[i]=='s' || interesse[i]=='S'){
				tinter++;
			}
		}
		else{
			if(interesse[i]=='n' || interesse[i]=='N'){
				mtinter++;
			}
		}
		
	}
	cout << "\nA quantidade de pessoas que tem interresse no pacote de viagem é: " << inter <<".";
	cout << "\nA quantidade de pessoas que não tem interesse no pacote de viagem é: " << ninter << ".";
	cout << "\nA quantidade de pessoas maiores de 30 anos que tem interresse no pacote de viagem é: " << tinter;
	cout << "\nA quantidade de pessoas menores de 30 anos que tem interresse no pacote de viagem é: " << mtinter;
}
