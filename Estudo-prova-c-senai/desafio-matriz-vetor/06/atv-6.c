#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 10

// FAÇA UM PROGRAMA QUE RECEBA DO USUÁRIO UM VETOR COM 10 POSIÇÕES. IMPRIMA O MAIOR E O MENOR VALOR DO VETOR
int main()
{
	setlocale(LC_ALL, "");
	
	int a, maior, menor,
	valor[TAM];
	
	for(a = 0; a < TAM; a++)
	{
		printf("Digite o %dº valor: ", a+1);
		scanf("%d", &valor[a]);
	}
	
	return 0;
}
