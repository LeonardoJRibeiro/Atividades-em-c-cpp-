#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	int num=0, soma=0, i=0;
	cout << "Digite um número: ";
	cin >> num;
	for (i=0;i<=num;i++){
		soma=soma+i;
		if(i%10==0)
		cout << soma << "\n";
	}
}
