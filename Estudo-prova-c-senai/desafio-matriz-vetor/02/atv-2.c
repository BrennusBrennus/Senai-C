#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 6

// CRIE UM PROGRAMA QUE L� 6 VALORES INTEIROS E, EM SEGUIDA, MOSTRE NA TELA OS VALORES LIDOS

int main()
{
	setlocale(LC_ALL, "");
	
	int a,
	valor[TAM];
	
	for(a = 0; a < TAM; a++)
	{
		printf("Digite o %d� valor: ", a+1);
		scanf("%d", &valor[a]);
	}
	
	printf("\n\n");
	for(a = 0; a < TAM; a++)
		printf("%d ", valor[a]);
	return 0;
}
