#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	char nome[30]; 
	cout<<"Digite o seu nome: ";
	cin.getline(nome,30);
	cout<<"Caracteres nas posições pares:    ";
	for(int i=0;i<=strlen(nome);i=i+2){
		cout<<" "<<nome[i];
	}
	cout<<"\nCaracteres nas posições ímpares:    ";
	for(int i=1;i<=strlen(nome);i=i+2){
		cout<<" "<<nome[i];
	}
}
