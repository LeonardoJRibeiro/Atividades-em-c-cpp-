#include <iostream>
#include <locale.h>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
	FILE* temp=tmpfile();
	if(temp == NULL) {
        cout<<"Erro ao criar um arquivo tempor�rio.";
    }
    fprintf(temp,"leo");
	system ("pause");
}
