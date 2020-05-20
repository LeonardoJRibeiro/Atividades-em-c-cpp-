#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	int i=0;
	string vet[10], vet1[10], at[10];
	for(i=0;i<=9;i++){
		cout<<"Digite um valor válido referente à "<<i+1<<"ª posição do vetor A: ";
		cin>>vet[i];	
	}
	for(i=0;i<=9;i++){
		cout<<"Digite um valor válido referente à "<<i+1<<"ª posição do vetor B: ";
		cin>>vet1[i];	
	}
	for(i=0;i<=9;i++){
		cout<<"Vetor A | "<<vet[i]<<"      Vetor B | "<<vet1[i]<<"\n";
		at[i]=vet[i];
		vet[i]=vet1[9-i];
	}
	cout<<"________________________________\n\n";
	for(i=0;i<=9;i++){
		vet1[i]=at[9-i];
		cout<<"Vetor A | "<<vet[i]<<"      Vetor B | "<<vet1[i]<<"\n";
	}
	
}
