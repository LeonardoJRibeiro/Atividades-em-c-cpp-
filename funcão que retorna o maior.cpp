#include <iostream>
#include <locale.h>

using namespace std;

int verf(int a, int b);

int main(){
	setlocale(LC_ALL,"portuguese");
	int x, y, maior;
	cout<<"Digite o 1º valor: ";
	cin>>x;
	cout<<"Digite o 2º valor: ";
	cin>>y;
	maior=verf(x,y);
	cout<<maior;
}
int verf(int a, int b){
	if(a>b)
		return a;
	else
		return b;
		
}
