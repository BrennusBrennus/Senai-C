#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 8

int main()
{
	setlocale(LC_ALL, "");
	
	int a,
	valor[TAM];
	
	for (a = 0; a < TAM; a++)
	{
		printf("Digite o %dº valor: ", a+1);
		scanf("%d", &valor[a]);
		fflush(stdin);
	}
	
	return 0;
}
