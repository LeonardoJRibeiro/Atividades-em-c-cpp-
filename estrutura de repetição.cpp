#include <iostream>

using namespace std;

int main(){
	int casos, inicio, fim;
	char a[100000];
	cout<<"Digite os casos: ";
	cin>>casos;
	for(int i=1;i<=casos;i++){
		cout<<"Digite o inicio do "<<i<<" caso";
		cin>>inicio;
		cout<<"Digite o fim do "<<i<<" caso";
		cin>>fim;
		for(int j=inicio;j<=fim;j++){
			cout<<j;
			a[i]=j;
		}
		for(int j=fim;j>=inicio;j--){
			cout<<j;
			a[i+fim]=j;
		}
		cout<<a;
	}
}
