#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

struct retorno{
	float x1, x2;
	int vd;
};

struct retorno *bhaskara(float a, float b, float c);

int main(){
	setlocale(LC_ALL,"portuguese");
	float a,b,c;
	int vd;
	while (vd==0){
		cout<<"Digite o valor de A (nX²)";
		cin>>a;
		cout<<"Digite o valor de B (nX)";
		cin>>b;
		cout<<"Digite o valor de C (n)";
		cin>>c;
		struct retorno *x=bhaskara(a,b,c);
		if(x->vd==1){
			vd=1;	
			cout<<"\nValor de x'= "<< x->x1 <<"\nValor de x\"= "<< x->x2;
		}
		else{
			cout<<"Impossível calcular a fórmula de Bháskara usando os valores introduzidos!\nDigite valores válidos!\n";
			system ("pause");
			system ("cls");
		}
	}
}
struct retorno *bhaskara(float a, float b, float c){
	static struct retorno x[3];
	float delta;
	delta=((b*b)-(4*a*c));
	if(delta<0||a==0)
		x->vd=0;
	else
		x->vd=1;
	x->x1=(float)(-b+sqrt(delta))/(2*a);
	x->x2=(float)(-b-sqrt(delta))/(2*a);
	return x;
}
