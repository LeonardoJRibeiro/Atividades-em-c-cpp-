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

    fprintf(arquivo, "O n�mero n � %d.\n");
    fprintf(arquivo, "pi � um n�mero irracional: %f...\n");
    fclose(arquivo);
}
