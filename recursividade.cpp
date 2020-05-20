#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int val1, val2, res, opc;
	cout<<"Digite o 1º valor: ";
	cin>>val1;
	cout<<"Digite o 2º valor: ";
	cin>>val2;
	res=val1+val2;
	cout<<"O resultado da soma é "<<res<<".\nDeseja calcular novamente?\n1. Sim\n2. Não\nDigite sua opção: ";
	cin>>opc;
	if(opc==1)
		main();
	else
		return 0;
}
