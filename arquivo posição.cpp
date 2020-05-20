#include <iostream>
#include <locale.h>
#include <fstream>

using namespace std;

int main(){
	fstream arq1;
	arq1.open("Nome.0txt", ios::ate);
	if(arq1.is_open()){
		long pos;
		cout<<"Posição atual no arquivo: "<<pos<<"\n";
		arq1<<"Thalyta\n";
		arq1<<"Sarah\n";
		arq1<<"Gabriel\n";
		pos=arq1.tellp();
			cout<<"Posição atual no arquivo: "<<pos<<"\n";
		arq1.close();
	}
	else{
		cout<<"Erro! Arquivo não foi aberto ou não existe!";
	}
	return 0;
}
