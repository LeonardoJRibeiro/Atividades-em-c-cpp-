#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL,"portuguese");
	int val=0, i=0, i1=0, par[5], impar[5], indcp=0, indci=0;
	for(i=0;i<=4;i++){
		par[i]=0;
		impar[i]=0;
	}
	i=0;
	while(i<=12){
		cout<<indcp<<" valores no vetor dos pares.\n"<<indci<<" valores no vetor dos ímpares.\n";
		if(indcp==5){
			cout<<"Vetor dos pares cheio!\n";
		}
		if(indci==5){
			cout<<"Vetor dos ímpares cheio!\n";
		}
		cout<<"Digite o "<<i+1<<"º valor: ";
		cin>>val;
		if(val%2==0){
			if(indcp<=4){
				par[indcp]=val;
				indcp++;
			}
		}
		if(val%2==1){
			if(indci<=4){
				impar[indci]=val;
				indci++;
			}
		}
		if(indcp==4&&indci==4){
			break;
		}
		i++;
		system("cls");
	}
	cout<<"\nPares:\n|";
	for(i1=0;i1<=indcp-1;i1++){
			cout<<par[i1]<<"|";
	}
	for(i1=0;i1<=5-indcp-1;i1++){
			cout<<"#|";
	}
	cout<<"\n\nImpares:\n|";
		for(i1=0;i1<=indci-1;i1++){
			cout<<impar[i1]<<"|";
	}
	for(i1=0;i1<=5-indci-1;i1++){
			cout<<"#|";
	}
}
