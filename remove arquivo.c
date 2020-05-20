#include <stdio.h>
#include <stdlib.h>

int main() {
    const char* caminho = "D:\\0.txt";
    if(remove(caminho) == 0) {
        puts("Arquivo removido com sucesso!");
    } else {
        printf("Não foi possível remover o arquivo %s.", caminho);
        return 1;
    }

    return 0;
}
