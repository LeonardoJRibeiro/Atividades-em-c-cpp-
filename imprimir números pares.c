#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	int qnt=0, qntp=0, qnti=0, i=0, val=0;
	printf ("Digite a quantidade de n�meros que ser�o lidos pelo programa: ");
	scanf ("%d", &qnt);
	for (i=1;i<=qnt;i++)
	{
		printf ("Digite o %d� n�mero: (s�o %d n�meros)", i, qnt);
		scanf("%d", &val);
		if(val%2==0)
		{
			qntp++;
		}
		else
		{
			qnti++;	
		}	
	}
	printf ("No total de %d n�meros:\n%d s�o pares.\n%d s�o �mpares.", qnt, qntp, qnti);	
}
