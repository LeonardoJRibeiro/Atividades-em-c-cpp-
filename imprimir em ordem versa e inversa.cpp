#include <iostream>
#include <locale.h>

using namespace std;
int main(){//ordem inversa
	setlocale (LC_ALL, "portuguese");
	int val[1000], i=0, sn=0, qnt=0;
	while (sn==0){
		i++;
		cout << "Digite o " << i << "º número: (para finalizar digite 0)";
		cin >> val[i];
		if (val[i]==0)
			sn=1;
			qnt=i-1;
	}
	cout << "\nOs números digitados foram: \n";
	for (i=1; i<=qnt; i++){
		if(i<10)
		cout <<"|" << i <<"º  |    " << val[i] << "|\n";
		else
		cout <<"|" << i <<"º |    " << val[i] << "|\n";
	}
	cout << "\nOs números na ordem inversa são: \n";
	for (i=qnt; i>=1; i--){
		if(i<10)
		cout <<"|" << i <<"º  |    " << val[i] << "|\n";
		else
		cout <<"|" << i <<"º |    " << val[i] << "|\n";
	}
}
