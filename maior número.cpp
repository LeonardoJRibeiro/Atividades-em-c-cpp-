#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i=0;
	float num[50], maior=0;
	for(i=0;i<=49;i++){
		cout<<"Digite o "<<i+1<<"º valor: ";
		cin>>num[i];
	}
	maior=num[0];
	for(i=0;i<=49;i++){
		if(maior<=num[i])
			maior=num[i];
	}
	cout<<"O maior número é: "<<maior<<".\n";
	for(i=0;i<=49;i++){
		num[i]=num[i]/maior;
		cout<<"_____________\n  "<<num[i]<<"\n";
	}
}
