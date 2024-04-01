#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

#define TAM 10

// ESCREVA UM PROGRAMA QUE LEIA 10 NÚMEROS INTEIROS E OS ARMAZENE EM UM VETOR.
// IMPRIMA O VETOR E INFORME A MAIOR E O MENOR VALOR DIGITADO.

int main()
{
	setlocale(LC_ALL, "");
	
	int a,
	maior = INT_MIN,
	menor = INT_MAX,
	valor[TAM];
	
	for(a = 0; a < TAM; a++)
	{
		printf("Digite o %dº número: ", a+1);
		scanf("%d", &valor[a]);
		
		if(valor[a] > maior) maior = valor[a];
		if(valor[a] < menor) menor = valor[a];
	}
	
	printf("\nValores digitados\n");
	for(a = 0; a < TAM; a++)
		printf("%d ", valor[a]);
		
	printf("\nMaior valor do vetor: %d", maior);
	printf("\nMenor valor do vetor: %d", menor);
	
	return 0;
}
