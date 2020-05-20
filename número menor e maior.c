#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	int val1, val2, maior, ordem;
	printf("Digite o 1º número: ");
	scanf("%d", &val1);
	printf("Digite o 2º número: ");
	scanf("%d", &val2);
	if (val1<val2)
	{
		maior=val2;
		ordem=2;
	}
	else
	{
		maior=val1;
		ordem=1;
	}
	if (val1==val2)
	{
		printf ("\n\n\nOs números são: %d e %d.\nEles são iguais!", val1, val2);
	}
	else
	{
		printf("\n\n\nOs números são: %d e %d.\nO %dº número digitado é o maior!\nSeu valor é: %d.",val1, val2,ordem, maior);
	}
}
