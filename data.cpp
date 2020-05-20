#include <time.h>
#include <stdio.h>
#include <stdlib.h>



void ParseData(char str[9], Data *Alvo)
{
	// 0, 1 = mes
	// 2    = /
	// 3, 4 = dia
	// 5    = /
	// 6, 7 = ano
	// 8    = NULO
	char _dia[3] = {
		str[3],
		str[4],
		0
	};
	char _mes[3] = {
		str[0],
		str[1],
		0
	};
	char _ano[3] = {
		str[6],
		str[7],
		0
	};
	Alvo->dia = atoi(_dia);
	Alvo->mes = atoi(_mes);
	Alvo->ano = atoi(_ano);
	return;
}

int main()
{
	char dateStr[9];

	// pega a data atual
	_strdate( dateStr);
	printf( "The current date is %s \n", dateStr);

	Data atual;
	ParseData(dateStr, &atual);

	printf("A data está guarda na variavel 'atual'\n");

	// exemplo de como acessar a data atual
	int a = atual.ano;
	int b = atual.dia;
	int c = atual.mes;

	printf("por exemplo o dia atraves de int b: %i\n", b) ;

	return 0;
}
