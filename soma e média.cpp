#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int val, qnt=0, soma=0;
	float media;
	while(val>=0){
		cout<<"digite... ";
		cin>>val;
		soma=soma+val;
		qnt++;
	}
	media=(float)soma/qnt;
	cout<<"Soma: "<<soma<<"\nMédia: "<<media<<"\nQuantidade: "<<qnt;
}
