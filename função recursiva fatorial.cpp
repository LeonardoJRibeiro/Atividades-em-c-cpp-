#include <iostream>
#include <locale.h>

using namespace std;

int fatorial(int n);

int main(){
	setlocale(LC_ALL,"portuguese");
	int numero, res;
	cout<<"Digite um n�mero: ";
	cin>>numero;
	res=fatorial(numero);
	cout<<"\nO Resultado �: "<<res;
	return 0;
}

int fatorial(int n){
	cout<<"\npassos: "<<n<<"\n";
	if(n==1){
		cout<<"\nretornou 1";
		return 1;
	}
	else{
		cout<<"\nretornou fun��o";
		return (n*fatorial(n-1));
	}
}
