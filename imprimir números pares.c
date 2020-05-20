#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	int qnt=0, qntp=0, qnti=0, i=0, val=0;
	printf ("Digite a quantidade de números que serão lidos pelo programa: ");
	scanf ("%d", &qnt);
	for (i=1;i<=qnt;i++)
	{
		printf ("Digite o %dº número: (são %d números)", i, qnt);
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
	printf ("No total de %d números:\n%d são pares.\n%d são ímpares.", qnt, qntp, qnti);	
}
