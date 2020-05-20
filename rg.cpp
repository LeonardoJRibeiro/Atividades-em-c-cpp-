#include <iostream>
#include <cstring>

using namespace std;
 
int main(){
	int rg[15], soma=0, resto;
	char rgc[15];
	cout<<"Digite...";
	cin.getline(rgc,15);
	for(int i=0;i<strlen(rgc);i++){
		rg[i]=rgc[i]-48;
		cout<<rg[i];
	}
	cout<<"\n"<<
	rgc;
}
