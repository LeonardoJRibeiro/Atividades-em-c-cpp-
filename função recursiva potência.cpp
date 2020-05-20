#include <iostream>
#include <locale.h>

using namespace std;

int expon(int base, int exp);

int main(){
	setlocale(LC_ALL,"portuguese");
	int base, expoente, res;
	cout<<"Digite o valor referente à base: ";
	cin>>base;
	cout<<"Digite o valor referente ao expoente: ";
	cin>>expoente;
	res=expon(base, expoente);
	cout<<"O resultado é: "<<res;
	return 0;
}
//função recursiva
int expon(int base, int exp){
	if(exp == 0)
		return 1;
	else 
		return (base*expon(base, exp-1));
}
