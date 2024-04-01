#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 6

// FAÇA UM PROGRAMA QUE POSSUA UM VETOR DENOMINADO A QUE ARMAZENE 6 NÚMEROS INTEIROS.
// O PROGRAMA DEVE SEGUIR OS SEGUINTES PASSOS: 
// a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7;
// b) Armazene em uma variável (simples) a soma entre os valores das posições [0], [1], [5];
// c) Modifique o vetor na posição [4], atribuindo o valor 100;
// d) Mostre na tela cada valor do vetor A, um em cada linha.

int main()
{
	setlocale(LC_ALL, "");
	
	int a, soma,
	valor[TAM];
	
	valor[0] = 1;
	valor[1] = 0;
	valor[2] = 5;
	valor[3] = -2;
	valor[4] = -5;
	valor[5] = 7;
	
	soma = valor[0] + valor[1] + valor[5];
	
	system("cls || clear");
	
	printf("Soma: %d", soma);
		
	printf("\nVetor na posição 4: %d", valor[4]);
	printf("\nDigite o valor 100: ");
	scanf("%d", &valor[4]);
	printf("\nApós alteração: %d", valor[4]);
	
	for (a = 0; a < TAM; a++)
		printf("\n%d\n", valor[a]);
	
	return 0;
}
