#include <iostream>
#include <locale.h>

using namespace std; 

int par(int v);

int main(){
	setlocale(LC_ALL,"portuguese");
	int valor, res;
	cout<<"Digite um valor: ";
	cin>>valor;
	res=par(valor);
	cout<<"O resultado booleano é "<<res;
}
int par(int v){
	if(v%2==0)
		return 1;
	else
		return 0;
}
