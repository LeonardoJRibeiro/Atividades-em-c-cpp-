#include <iostream>
#include <locale.h>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	char caminho_old[256]="C:\\teste\\a.txt", caminho_new[256]="C:\\teste\\02.txt";
	if(rename(caminho_old,caminho_new)==0){
		cout<<"Arquivo: "<<caminho_old<<"\nRenomeado para: "<<caminho_new;
	}
	else{
		cout<<"Erro!";
	}
}
