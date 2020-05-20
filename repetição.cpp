#include <iostream>

using namespace std;

int main(){
	int casos, inicio, fim;
	cout<<"Digite os casos: ";
	cin>>casos;
	for(int i=0;i<=casos;i++){
		cout<<"Digite o inicio do "<<i+1<<" caso";
		cin>>inicio;
		cout<<"Digite o fim do "<<i+1<<" caso";
		cin>>fim;
		for(int j=inicio;j<=fim;j++){
			cout<<j;
		}
		for(int j=fim;j>=inicio;j--){
			cout<<j;
		}
	}
}
