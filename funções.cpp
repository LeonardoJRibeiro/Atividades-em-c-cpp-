#include <iostream>
#include <locale.h>

using namespace std;

void mensagem();
void calcular(int x, int y);
int calcular2(int w, int z);

int main(){
	setlocale(LC_ALL, "portuguese");
	int r;
	mensagem();
	calcular(10,5);
	r=calcular2(50,88);
	cout<<"O resultado da multiplicação é:"<<r<<".\n";
	return 0;
}

void mensagem(){
	cout<<"Função sem retorno de valores ao módulo principal!\n";
}

void calcular(int x, int y){
	cout<<"A soma dos valores é: "<<x+y<<".\n";
}

int calcular2(int w, int z){
	return w*z;
}
