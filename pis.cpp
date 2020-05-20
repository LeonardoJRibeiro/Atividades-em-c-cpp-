#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

void validapis(int *n);

int main(){
	setlocale(LC_ALL,"portuguese");
	char pisch[20];
	int pisint[16], vd=0;
	cin.ignore();
	while(vd==0){
		cout<<"Digite o seu PIS de acordo com os exemplos: (0000000000-0) ou (0000000000 0)";
		cin.getline(pisch,20);
		if(strlen(pisch)!=12||(pisch[10]!=' '&&pisch[10]!='-')){
			system("cls");
			cout<<"Formato de inserção errado!\n";
		}
		else{
			vd++;
		}
	}
	for (int i=0;i<=11;i++){ 
		pisint[i]=pisch[i]-48;
	}
	validapis(pisint);
}

void validapis(int *n){
	int soma=0, pesos1[10]={3, 2, 9, 8, 7, 6, 5, 4, 3, 2}, resto;
	for(int i=0;i<=9; i++){
		soma=soma+(n[i]*pesos1[i]);
	}
	resto=soma%11;
	resto=11-resto;
	if(resto==10){
		resto=0;
	}
	if(resto==n[11]){
		cout<<"\nO PIS digitado é válido!";
	}
	else{
		cout<<"\nO PIS digitado não é válido!";
	}
}
