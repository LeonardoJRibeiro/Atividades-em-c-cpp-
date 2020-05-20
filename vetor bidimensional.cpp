#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	int i=0, j=0;
	string dados[5][2];
	for(i=0;i<=4;i++){
		for(j=0;j<=1;j++){
			if(j==0){
				cout<<"Digite o nome do "<<i+1<<"ª aluno: ";
				cin>>dados[i][j];
			}
			else{
				cout<<"Digite o sexo do "<<i+1<<"ª aluno: (M/F)";
				cin>>dados[i][j];
			}
		}
	}
	for(i=0;i<=4;i++){
		for(j=0;j<=1;j++){
			cout<<dados[i][j]<<"    ";
		}
		cout<<"\n";
	}
}
