#include <iostream>
#include <locale.h>
#include <cstring>
using namespace std;

int main(){
	char nome[30], nom[30];
	cout<<"Digite o seu nome: ";
	cin.getline(nome,30);
	strncpy(nom,nome,4);
	cout<<"Nome: "<<nome<<"\nNome com 4 caracteres: "<<nom<<"\nSeu nome tem "<<strlen(nome)<<" caracteres.";
}
