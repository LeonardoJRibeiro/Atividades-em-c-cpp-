#include <iostream>
#include <locale.h>

using namespace std;

void turno(int h, int m);
int main(){
	setlocale(LC_ALL,"portuguese");
	int hr, min;
	cout<<"Digite a hora: ";
	cin>>hr;
	cout<<"Digite os minutos: ";
	cin>>min;
	turno(hr,min);
	return 0;
}
void turno(int h, int m){
	if(h>=0 && h<6)
		cout<<"Madrugada";
	if(h>=6 && h<12)
		cout<<"Manhã";
	if(h>=12 && h<18)
		cout<<"tarde";
	if(h>=18 && h<24)
		cout<<"Noite";
	if(h>=24)
		cout<<"Valor inválido!";	
}
