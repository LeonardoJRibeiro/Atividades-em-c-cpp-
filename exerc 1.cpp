#include <iostream>
#include <locale.h>

using namespace std;


struct retorno {
	int maior, menor;
};

struct retorno *maiormenor(int *v);

int main(){
	setlocale(LC_ALL,"portuguese");
	int valor[50];
	for(int i=0;i<=4;i++){
		cout<<"Digite o "<<i+1<<" número: ";
		cin>>valor[i];
	}
	struct retorno *n=maiormenor(valor);
	cout<<"O maior valor digitado foi: "<<n->maior<<"\nO menor valor digitado foi: "<<n->menor;
}
struct retorno *maiormenor(int *v){
	static struct retorno n[3];
	int maior, menor;
	maior=v[0];
	menor=v[0];
	for(int i=0;i<=4;i++){
		if(v[i]>maior)
			maior=v[i];
	}
	for(int i=0;i<=4;i++){
		if(v[i]<menor)
			menor=v[i];
	}
	n->maior=maior;
	n->menor=menor;
	return n;
}
