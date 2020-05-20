#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	int val[5], valc[5], i, i1, indc, aux, menor;
	for(i=0;i<=4;i++){
		cout<<"Digite... ";
		cin>>val[i];
	}
	menor=val[0];
	for(i=0;i<=4;i++){
		if(val[i]>menor){
			menor=val[i];
		}
	}
	for(i1=0;i1<=4;i1++){	
		aux=menor;		
		for(i=0;i<=4;i++){
			if(val[i]<aux){
				aux=val[i];
				indc=i;
			}
		}
		val[indc]=menor;
		valc[i1]=aux;
	}
	for(i1=0;i1<=4;i1++){
		cout<<valc[i1]<<"\n";
	}
}
