#include <iostream>
#include <locale.h>

using namespace std;

int dias(int dia, int mes, int ano, int dia_n, int mes_n, int ano_n, int ano_i);

int main(){
	setlocale(LC_ALL,"portuguese");
	int ano, mes, dia, ano_n, mes_n, dia_n, ano_i, mes_i, dia_i, totaldias;
	cout<<"Digite o dia atual: ";
	cin>>dia;
	cout<<"Digite o mês atual: ";
	cin>>mes;
	cout<<"Digite o ano atual: ";
	cin>>ano;
	cout<<"\n\nDigite o dia de seu nascimento ";
	cin>>dia_n;
	cout<<"Digite o mês de seu nascimento ";
	cin>>mes_n;
	cout<<"Digite o ano de seu nascimento ";
	cin>>ano_n;
	ano_i=ano-ano_n;
	mes_i=mes-mes_n;
	dia_i=dia-dia_n;
	if(mes_i<0){
		ano_i--;
		mes_i=mes-mes_n+12;
	}
	if(dia_i<0){
		mes_i--;
		switch (mes_n){
			case 1: dia_i=dia-dia_n+31;
				break;
			case 2: if(ano%4==0)
						dia_i=dia-dia_n+29;
					else
						dia_i=dia-dia_n+28;
				break;
			case 3: dia_i=dia-dia_n+31;
				break;
			case 4: dia_i=dia-dia_n+30;
				break;
			case 5: dia_i=dia-dia_n+31;
				break;
			case 6: dia_i=dia-dia_n+30;
				break;
			case 7: dia_i=dia-dia_n+31;
				break;
			case 8: dia_i=dia-dia_n+31;
				break;
			case 9: dia_i=dia-dia_n+30;
				break;
			case 10: dia_i=dia-dia_n+31;
				break;
			case 11: dia_i=dia-dia_n+30;
				break;
			case 12: dia_i=dia-dia_n+31;
				break;
		}
	}
	cout<<"##\n## "<<ano_i<<" Anos, "<<mes_i<<" meses e "<<dia_i<<" dias\n##";
	totaldias=dias(dia, mes, ano, dia_n, mes_n, ano_n, ano_i);
	cout<<"\n##\n## A sua idade em dias é: "<<totaldias<<"\n##\n";
	system("pause");
}
int dias(int dia, int mes, int ano, int dia_n, int mes_n, int ano_n, int ano_i){
	int dias=0,ddan,ddat,tdias;
	//contagem mês nascimento até o fim do ano do nascimento
	switch (mes_n){
		case 1: dias=365-dia_n;
			break;
		case 2: dias=334-dia_n;
			break;
		case 3: dias=306-dia_n;
			break;
		case 4: dias=275-dia_n;
			break;
		case 5: dias=245-dia_n;
			break;
		case 6: dias=214-dia_n;
			break;
		case 7: dias=184-dia_n;
			break;
		case 8: dias=153-dia_n;
			break;
		case 9: dias=122-dia_n;
			break;
		case 10: dias=92-dia_n;
			break;
		case 11: dias=61-dia_n;
			break;
		case 12: dias=31-dia_n;
	}
	ddan=dias;
	dias=0;
	switch (mes){
		case 1: dias=dia;
			break;
		case 2: dias=dia+31;
			break;
		case 3: dias=dia+59;
			break;
		case 4: dias=dia+90;
			break;
		case 5: dias=dia+120;
			break;
		case 6: dias=dia+151;
			break;
		case 7: dias=dia+181;
			break;
		case 8: dias=dia+212;
			break;
		case 9: dias=dia+243;
			break;
		case 10: dias=dia+273;
			break;
		case 11: dias=dia+304;
			break;
		case 12: dias=dia+334;
	}
	ddat=dias;
	if(ano_n==ano){
		tdias=ddat-365+ddan;
	}
	else{
		tdias=ddan+ddat+(365*(ano_i-1));
	}
	//ano bissexto
	//ano nascimento
	if(ano_n%4==0&&mes_n<=2&&mes!=mes_n)
		tdias++;
	//anos do meio
	for(int i=ano_n+1;i<=ano-1;i++){
		if(i%4==0)
			tdias++;
	}
	//ano atual
	if(ano%4==0&&mes>=3&&ano!=ano_n)
		tdias++;
	return tdias;
}
