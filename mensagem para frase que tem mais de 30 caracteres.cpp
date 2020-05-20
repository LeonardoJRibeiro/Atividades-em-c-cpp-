#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	char frase[50];
	cout<<"Digite uma frase contendo no máximo 30 caracteres: ";
	cin.getline(frase,50);
	if(strlen(frase)>30)
		cout<<"O usuário digitou uma frase que contém mais de 30 caracters!"; 
}
