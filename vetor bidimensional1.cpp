#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	string dados[5][2];
	for(int i=0;i<=4;i++){
		cout<<"Digite o nome do "<<i+1<<"ª aluno: ";
		cin>>dados[i][0];
		cout<<"Digite o sexo do "<<i+1<<"ª aluno: (M/F)";
		cin>>dados[i][1];
	}
	for(int i=0;i<=4;i++){
		cout << "Nome: " << dados[i][0] << "   Sexo: " << dados[i][1]<< "\n ";
	}
}
