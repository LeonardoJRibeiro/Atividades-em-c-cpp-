#include <iostream>
#include <locale.h>

using namespace std;

float media(int *n, int qnt);

int main(){
	setlocale(LC_ALL,"portuguese");
	int valor[100000], indc;
	float med_a;
	cout<<"Para finalizar, digite qualquer valor menor do que 0.";
	for(int i=0;i<=99999;i++){
		cout<<"\nDigite o "<<i+1<<"º número:";
		cin>>valor[i];
		if(valor[i]<0){
			indc=i;
			break;
		}
	}
	med_a=media(valor,indc);
	cout<<"\nA média aritmética dos números é: "<<med_a;
}
float media(int *n, int qnt){
	int soma=0;
	float media;
	for(int i=0;i<qnt;i++){
		soma=soma+n[i];
	}
	cout<<soma<<"\n"<<qnt;
	media=(float)soma/qnt;
	return media;
}
