#include <stdio.h>
#include <locale.h>


main()
{
	setlocale(LC_ALL,"portuguese");
	int el[100], ln, cl, i, i1, i2;
	for (i=1;i<=100;i++)
	{
		el[i]=0;
	}
	printf("Digite a quantidade de linhas: ");
	scanf("%d", &ln);
	printf("Digite a quantidade de colunas: ");
	scanf("%d", &cl);
	for (i=1; i<=ln; i++)
	{
		printf("| ");
		for (i1=1; i1<=cl; i1++)
		{
			printf("%d ",el[i]);
		}
		printf("|\n");
	}
	for (i=1; i<=ln; i++)
	{
		for (i1=1; i1<=cl; i1++)
		{
			i2=(i1+(i-1)*cl);
			printf("Digite o %dº elemento da matriz correspondente a linha %d e a coluna %d:",i2, i, i1);
			scanf ("%d", &el[i2]);
		}	
	}
	printf("\n\nA matriz é: \n\n");
	for (i=1; i<=ln; i++)
	{
		printf("| ");
		for (i1=1; i1<=cl; i1++)
		{
			i2=(i1+(i-1)*cl);
			printf("%d ",el[i2]);
		}
		printf("|\n");	
	} 
	i2=1;
	printf("\n\nA matriz transposta é: \n\n");
	for (i=1; i<=cl; i++)
	{
		printf("| ");
		for (i1=1; i1<=ln; i1++)
		{
			if(i1==1)
			{
			}
			else
			{
				i2=(i2+cl-1);
			}
			printf("%d ",el[i2]);
			if(i1==ln)
			{
			}
			else
			{
				i2++;
			}
		}
		i2=i2-(cl*(ln-1)-1);
		printf("|\n");	
	} 
}
