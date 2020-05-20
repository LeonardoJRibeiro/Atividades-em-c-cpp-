#include <iostream>
#include <locale.h>

using namespace std;

int fatorial(int n);

int main(){
	setlocale(LC_ALL,"portuguese");
	int numero, res;
	cout<<"Digite um número: ";
	cin>>numero;
	res=fatorial(numero);
	cout<<"\nO Resultado é: "<<res;
	return 0;
}

int fatorial(int n){
	cout<<"\npassos: "<<n<<"\n";
	if(n==1){
		cout<<"\nretornou 1";
		return 1;
	}
	else{
		cout<<"\nretornou função";
		return (n*fatorial(n-1));
	}
}
