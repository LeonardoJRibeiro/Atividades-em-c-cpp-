#include <iostream>
#include <locale.h>
#include <fstream>

using namespace std;

int main(){
	fstream arq1;
	arq1.open("0.txt",ios::app);
	arq1<<"Nome\n";
	arq1<<"Nomes\n";
	arq1.close();
	return 0;
	
	
}




