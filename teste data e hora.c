#include <time.h>
#include <stdio.h>

// pega a data e hora atual e imprime na tela
int main()
{
	int dateStr[9];
	char timeStr[9];

	// pega a data atual
	_strdate( dateStr);
	printf_s( "The current date is %s \n", dateStr);

	// pega a hora atual
	_strtime( timeStr );
	printf_s( "The current time is %s \n", timeStr);

	getchar();
	return 0;
}
