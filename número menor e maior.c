#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	int val1, val2, maior, ordem;
	printf("Digite o 1� n�mero: ");
	scanf("%d", &val1);
	printf("Digite o 2� n�mero: ");
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
		printf ("\n\n\nOs n�meros s�o: %d e %d.\nEles s�o iguais!", val1, val2);
	}
	else
	{
		printf("\n\n\nOs n�meros s�o: %d e %d.\nO %d� n�mero digitado � o maior!\nSeu valor �: %d.",val1, val2,ordem, maior);
	}
}
