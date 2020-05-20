#include <iostream>
#include <locale.h>
#include <cstring>

using namespace std;

int main(){
	char a[256];
	for(int i=0;i<=255;i++){
		a[i]=i;
		cout<<a[i]<<"\n";
	}
}
