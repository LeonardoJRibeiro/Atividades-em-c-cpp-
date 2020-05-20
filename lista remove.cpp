#include <iostream>
#include <locale.h>
#include <cstring>
#include <fstream>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	char caminho[256]="C:\\teste\\0.txt";
	if(remove("c:\\teste\\02.txt")==0){
		cout<<"Arquivo removido com sucesso!";
	}
	else{
		cout<<"Erro!\n";
		
	}
}
