#include <iostream>
#include <locale.h>

//using namespace std;

long int primo(long int a);

int main(){
	setlocale(LC_ALL,"portuguese");
	int long valor, p;
	std::cout<<"Digite um número: ";
	std::cin>>valor;
	p=primo(valor);
	if(p==1)
		std::cout<<"O número é primo!";
	else
		std::cout<<"O número não é primo!";
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
