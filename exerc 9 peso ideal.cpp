#include <iostream>
#include <locale.h>

using namespace std;

float pesoid(float h, char l);

int main(){
	setlocale(LC_ALL,"portuguese");
	float alt, pesoideal;
	char letra;
	cout<<"Digite a sua altura: ";
	cin>>alt;
	cout<<"Qual é o seu sexo? (M/F): ";
	cin>>letra;
	pesoideal= pesoid(alt, letra);
	cout<<"O seu peso ideal é "<<pesoideal<<"Kg.";
}

float pesoid(float h, char l){
	if(l=='M'||l=='m'){
		float p=(72.2*h)-58;
		return p;
	}
	if(l=='F'||l=='f'){
		float p=(62.1*h)-44.7;
		return p;
	}
}
