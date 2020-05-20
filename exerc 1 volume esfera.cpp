#include <iostream>
#include <locale.h>

using namespace std;
void volume(float r);
int main(){
	setlocale(LC_ALL,"portuguese");
	float raio;
	cout<<"Digite o raio da esfera: ";
	cin>>raio;
	volume(raio);
	return 0;
}
void volume(float r){
	float volume;
	volume=(((float)3/2)*(r*r*r));
	cout<<"O volume da esfera é "<<volume<<"Um³.";
}
