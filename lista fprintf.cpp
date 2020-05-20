#include <iostream>
#include <clocale>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
	FILE* arquivo = fopen("saida.txt", "w");
    if(arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.txt.\n");
        return 1;
    }

    fprintf(arquivo, "O número n é %d.\n");
    fprintf(arquivo, "pi é um número irracional: %f...\n");
    fclose(arquivo);
}
