#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 15

// FA�A UM PROGRAMA QUE LEIA A NOTA DA PROVA DE 15 ALUNOS E ARMAZENE EM UM VETOR. IMPRIMA A M�DIA GERAL.
int main()
{
	setlocale(LC_ALL, "");
	
	int a;
	float media, 
	soma, cont,
	valor[TAM];
	
	for(a = 0; a < TAM; a++)
	{
		printf("Digite a %d� nota: ", a+1);
		scanf("%f", &valor[a]);
		fflush(stdin);
		cont++;
		soma += valor[a];
	}
	
	media = soma/cont;
	
	printf("\n\nM�dia dos valores: %.1f", media);
	return 0;
}
