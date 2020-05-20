#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

int main(){
	setlocale(LC_ALL,"C");
	char cantose=201, cantosd=187, cantoie=200, cantoid=188, horizontal=205, vertical=186;
	char intersve=204, intersvd=185, intershs=203, intersvi=202, centro=206;
	char l[100];
	cout<<"Digite uma frase: ";
	cin.getline(l,100);
	cout<<"\n"<<cantose;
	for(int i=0;i<=strlen(l)+3;i++){
		cout<<horizontal;
	}
	cout<<cantosd<<"\n"<<vertical<<"  ";
	setlocale(LC_ALL,"portuguese");
	cout<<l;
	setlocale(LC_ALL,"C");
	cout<<"  "<<vertical<<"\n";
	cout<<cantoie;
	for(int i=0;i<=strlen(l)+3;i++){
		cout<<horizontal;
	}
	cout<<cantoid<<"\n";
}
