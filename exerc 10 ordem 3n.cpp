#include <iostream>
#include <locale.h>

using namespace std;

struct retorno{
	int x,y,z;
};

struct retorno *ordem(int a,int b,int c);

int main(){
	setlocale(LC_ALL,"portuguese");
	int v1, v2, v3;
	cout<<"Digite o 1º valor: ";
	cin>>v1;
	cout<<"Digite o 2º valor: ";
	cin>>v2;
	cout<<"Digite o 3º valor: ";
	cin>>v3;
	struct retorno *v=ordem(v1,v2,v3);
	cout<<"1º: "<<v->x<<"\n2º: "<<v->y<<"\n3º: "<<v->z;
}
struct retorno *ordem(int a,int b,int c){
	static struct retorno v[3];
	int desord[3]={a,b,c},ord[3], maior, aux, indz;
	maior=desord[0];
	for(int i=0;i<=2;i++){
		if(desord[i]>maior)
			maior=desord[i];
	}
	for(int i=0;i<=2;i++){
		aux=maior;
		for(int j=0;j<=2;j++){
			if(desord[j]<aux){
				aux=desord[j];
				indz=j;
			}
		}
		desord[indz]=maior;
		ord[i]=aux;
	}
	v->x=ord[0];
	v->y=ord[1];
	v->z=ord[2];	
	return v;
}
