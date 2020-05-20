#include <iostream>
#include <locale.h>

using namespace std;

struct tempo {
	int hr, mm, s;
};

struct tempo *calculo(int s);

int main(){
	setlocale(LC_ALL,"portuguese");
	int segundos;
	cout<<"Digite o tempo de duração de  uma fábrica em segundos: ";
	cin>>segundos;
	struct tempo *t=calculo(segundos);
	cout<<"Horas: "<<t->hr<<"\nMinutos: "<<t->mm<<"\nSegundos: "<<t->s;
	return 0;
}

struct tempo *calculo(int s){
	static struct tempo t[3];
	t->hr=s/3600;
	t->mm=(s%3600)/60;
	t->s=((s%3600)%60);
	return t;     
}
