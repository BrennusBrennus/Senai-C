#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5

// FAÇA UM PROGRAMA QUE PREENCHA UM VETOR COM 10 VALORES. 
// CALCULE E MOSTRE A QUANTIDADE DE NÚMEROS NEGATIVOS E A SOMA DOS NÚMEROS POSITIVOS.

int main()
{
	setlocale(LC_ALL, "");
	
	int a, 
	soma = 0,
	negativo = 0,
	valor[TAM];
	
	for(a = 0; a < TAM; a++)
	{
		printf("Digite o %dº valor: ", a+1);
		scanf("%d", &valor[a]);
		fflush(stdin);
		
		valor[a] < 0 ? negativo++ : (soma += valor[a]);
		
		/*
		if(valor[a] > 0) soma += valor[a];
		if(valor[a] < 0) negativo++;
		*/
	}
	
	printf("\n\nQuantida de números negativos digitados: %d", negativo);
	printf("\nSoma dos números positivos: %d", soma);
	
	return 0;
}
