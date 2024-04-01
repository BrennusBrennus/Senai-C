#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 10

// LEIA UM VETOR DE 10 POSIÇÕES. CONTAR E ESCREVER QUANTOS SÃOS OS VALORES PARES.

int main()
{
	setlocale(LC_ALL, "");
	
	int a, par = 0,
	valor[TAM];
	
	for(a = 0; a < TAM; a++)
	{
		printf("Digite o %d valor: ", a+1);
		scanf("%d", &valor[a]);
		if (valor[a] % 2 == 0) par++;
	}
	
	printf("Quantididade de pares digitados: %d", par);
	
	return 0;
}
