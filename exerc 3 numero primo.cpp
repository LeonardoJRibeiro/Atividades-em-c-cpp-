#include <iostream>
#include <locale.h>

//using namespace std;

long int primo(long int a);

int main(){
	setlocale(LC_ALL,"portuguese");
	int long valor, p;
	std::cout<<"Digite um n�mero: ";
	std::cin>>valor;
	p=primo(valor);
	if(p==1)
		std::cout<<"O n�mero � primo!";
	else
		std::cout<<"O n�mero n�o � primo!";
	return 0;
}
long int primo(long int a){
	int cont=0;
	for(long int i=1;i<=a;i++){
		if(a%i==0)
			cont++;
	}
	if(cont<=2)
		return 1;
	else
		return 0;
}
