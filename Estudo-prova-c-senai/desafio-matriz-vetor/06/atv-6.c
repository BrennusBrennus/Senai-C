#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 10

// FA�A UM PROGRAMA QUE RECEBA DO USU�RIO UM VETOR COM 10 POSI��ES. IMPRIMA O MAIOR E O MENOR VALOR DO VETOR
int main()
{
	setlocale(LC_ALL, "");
	
	int a, maior, menor,
	valor[TAM];
	
	for(a = 0; a < TAM; a++)
	{
		printf("Digite o %d� valor: ", a+1);
		scanf("%d", &valor[a]);
	}
	
	return 0;
}
