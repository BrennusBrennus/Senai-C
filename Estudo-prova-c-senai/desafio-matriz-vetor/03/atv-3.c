#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 10

// LER UM CONJUNTO DE NÚMEROS REAIS, ARMAZENANDO-OS EM UM VETOR E CALCULAR O QUADRADO DOS COMPONENTES DESSE VETOR,
// ARMAZENANDO O RESULTADO EM OUTRO VETOR. OS CONJUNTOS TÊM 10 ELEMENTOS CADA. IMPRIMIR TODOS OS CONJUNTOS.

int main()
{
	setlocale(LC_ALL, "");
	
	int a,
	valor[TAM],
	quadrado[TAM];
	
	for(a = 0; a < TAM; a++)
	{
		printf("Digite o %dº valor: ", a+1);
		scanf("%d", &valor[a]);
		quadrado[a] = valor[a] * valor[a];
	}
	
	printf("\n\n");
	for(a = 0; a < TAM; a++)
		printf("%d ao quadrado: %d\n", valor[a], quadrado[a]);
	
	return 0;
}
