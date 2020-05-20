#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	char a[256];
	for(int i=0;i<=512;i++){
		a[i]=i;
		cout<<a[i]<<"    "<<i<<"\n";
	}
}
