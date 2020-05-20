#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	int i, inss=0;
	float salariob[10], salariol[10], inssd=0, ipr=0;
	for(i=0;i<=9;i++){
		cout<<"Digite o salário da "<<i+1<<"ª pessoa ";
		cin>>salariob[i];
		if(salariob[i]<=1659.38)
			inss=8;
		else{
			if(salariob[i]<=2765.66)
				inss=9;
			else
				inss=11;
		}
		inssd=(salariob[i]*inss)/100;
		salariol[i]=salariob[i]-inssd;
		if(salariob[i]<=1903.98)
			ipr=0;
		if(salariob[i]>=1903.99 && salariob[i]<=2826.65)
			ipr=142.80;
		if(salariob[i]>=2826.66 && salariob[i]<=3751.05)
			ipr=354.80;
		if(salariob[i]>=3751.06 && salariob[i]<=4664.68)
			ipr=636.13;
		if(salariob[i]>=4664.68)
			ipr=869.36;
		salariol[i]=salariol[i]-ipr;
		system("cls");
	}
	for(i=0;i<=9;i++){
		cout<<"____________________________________________________________\nReferente à "<<i+1<<"ª pessoa:\nSalário bruto: R$"<<salariob[i]<<".\nSalário líquido: R$"<<salariol[i]<<".\n";
	}
}
