#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 6

// CRIE UM PROGRAMA QUE LÊ 6 VALORES INTEIROS E, EM SEGUIDA, MOSTRE NA TELA OS VALORES NA ORDEM INVERSA.

int main()
{
	setlocale(LC_ALL, "");
	
	int a,
	valor[TAM];
	
	for(a = 0; a < TAM; a++)	
	{
		printf("Digite o %dº valor: ", a+1);
		scanf("%d", &valor[a]);
	}
	
	printf("Valores do vetor na ordem inversa: ");
	for(a = TAM-1; a >= 0; a--)
		printf("%d ", valor[a]);
	
	return 0;
}
