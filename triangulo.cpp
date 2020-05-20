#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

float tipo(float a, float b, float c);
float triangulo(float a, float b, float c);

int main(){
	setlocale(LC_ALL,"portuguese");
	int vd=0;
	float x, y, z;
	while(vd==0){
		system ("cls");
		cout<<"Digite o comprimento do lado AB do tri�ngulo: ";
		cin>>x;
		cout<<"Digite o comprimento do lado BC do tri�ngulo: ";
		cin>>y;
		cout<<"Digite o comprimento do lado CA do tri�ngulo: ";
		cin>>z;
		vd=triangulo(x,y,z);
	}
}
float triangulo(float a, float b, float c){
	//tri�ngulo v�lido
	if(a+b>c && a+c>b && b+c>a){
		if(a==b && a==c){
			cout<<"\nOs lados lidos correspondem � um tri�gulo equil�tero.";
		}
		if((a==b && c!=a)|| (a==c && b!=c) || (b==c && a!=b)){
			cout<<"\nOs lados lidos correspondem � um tri�ngulo is�sceles.";
		}
		if(a!=b && b!=c && c!=a){
			cout<<"\nOs lados lidos correspondem � um tri�ngulo escaleno.";
		}
		return 1;
	}
	else{
		cout<<"Os valores inseridos n�o correspondem aos lados de um tri�ngulo real.\nLembrando que: o comprimento de um lado do tri�ngulo deve ser menor do que a soma dos outros dois lados.\n\n";
		system ("pause");
		return 0;
	}
}
