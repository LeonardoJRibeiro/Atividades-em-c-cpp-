#include <iostream>
#include <locale.h>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
	string palavra;
	int qntl=0;
	fstream arq_in("0.txt");
	if(arq_in.is_open()){
		while(! arq_in.eof()){
			getline(arq_in,palavra);
			cout<<palavra;
			qntl++;
		}
		arq_in.close();
	}
}
