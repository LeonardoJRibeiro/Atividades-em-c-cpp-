#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int aleat(int a, int b);

int main(){
	setlocale(LC_ALL,"portuguese");
	int sorteio=0;
	sorteio=aleat(1,6);
	cout<<sorteio;
}
int aleat(int a, int b){
	srand((unsigned)time(0));
	int v=rand()%(a-b+1)+1;
	return v;
}
