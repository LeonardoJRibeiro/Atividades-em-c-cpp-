#include <iostream>

using namespace std;

int main(){
	char autores[2][20]={"SILVA, Mariana", 
							"ARAUJO, João"};
	int obraspublicadas[2][5]={{20,51,30,17,440},
								{ 150,120,90,110,88}};
	for (int i=0;i<2;i++){
		cout<<"Autores: "<<autores[i];
		cout<<"\nNumeros de obras publicadas: ";
		for(int j=0;j<5;j++){
			cout<<"\t"<<obraspublicadas[i][j];
 		} 
	cout<<"\n";
	}
}
