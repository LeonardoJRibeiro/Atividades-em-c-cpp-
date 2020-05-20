#include <iostream>
#include <locale.h>

using namespace std;

float media(float n1, float n2, float n3, char l);
int main(){
	setlocale(LC_ALL,"portuguese");
	float nota1, nota2, nota3, m;
	int vd=0;
	char letra;
	cout<<"Digite a 1� nota: ";
	cin>>nota1;
	cout<<"Digite a 2� nota: ";
	cin>>nota2;
	cout<<"Digite a 3� nota: ";
	cin>>nota3;
	cout<<"Digite uma letra referente ao tipo de m�dia:\nA - M�dia aritm�tica;\nP - M�dia ponderada (pesos 5, 3 e 2);\nH - M�dia harm�nica;\n";
	cin>>letra;
	while(vd==0){
		if(letra=='a'||letra=='A'||letra=='p'||letra=='P'||letra=='h'||letra=='H')
			vd=1;
		else{
			cout<<"\nDigite uma letra v�lida! ";
			cin>>letra;
			vd=0;
		}
	}
	m=media(nota1, nota2, nota3, letra);
	cout<<"A m�dia �: "<<m;
}
float media(float n1, float n2, float n3, char l){
	float soma, med;
	if(l=='A'||l=='a'){
		soma=n1+n2+n3;
		med=(float)soma/3;
	}
	if(l=='P'||l=='p'){
		soma=(5*n1)+(3*n2)+(2*n3);
		med=(float) soma/10;
	}
	if(l=='H'||l=='h'){
		soma=((float)1/n1)+((float)1/n2)+((float)1/n3);
		med=(float)3/soma;
	}
	return med;
}
