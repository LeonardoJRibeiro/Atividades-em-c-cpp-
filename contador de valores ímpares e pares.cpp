#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	int par=0, impar=0, valor=0, i=0;
	for(i=0;i<=9;i++){
		cout<<"Digite o "<<i+1<<"º valor: ";
		cin>>valor;
		if(valor%2==0)
			par++;
		else
			impar++;
	}
	cout<<"São "<<par<<" números pares e "<<impar<<"números ímpares.";
}
