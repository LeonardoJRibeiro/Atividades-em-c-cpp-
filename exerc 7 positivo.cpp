#include <iostream>
#include <locale.h>

using namespace std;

int positivo(int v);

int main(){
	setlocale(LC_ALL,"portuguese");
	int valor, res;
	cout<<"Digite um valor: ";
	cin>>valor;
	res=positivo(valor);
	cout<<"O resultado booleano � "<<res;
}
int positivo(int v){
	if(v>=0)
		return 1;
	else
		return 0;
}
