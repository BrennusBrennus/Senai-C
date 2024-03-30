#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define TAM 4
#define TAM2 3

int main()
{
	setlocale(LC_ALL, "");
	
	int a, b, div = TAM2;
	char nome[TAM][101];
	float soma;
	float nota[TAM][3];
	float media[TAM];

	for (a = 0; a < TAM; a++)
	{
		printf("Aluno: ");
		fgets(nome[a], 101, stdin);
		fflush(stdin);
		
		for (b = 0; b < TAM2; b++)
		{
			do
			{
				printf("%dª nota: ", b+1);
				scanf("%f", &nota[a][b]);
				fflush(stdin);
			}while (nota[a][b] < 0 || nota[a][b] > 10);
			
			soma += nota[a][b];
			media[a] = soma / div;
		}
		
		soma = 0;
		printf("\n\n");
	}
	
	system("cls || clear");
	printf("== Exibindo resultados ==\n");
	for (a = 0; a < TAM; a++)
	{
		printf("Aluno: %s", nome[a]);
		
		for (b = 0; b < TAM2; b++)
			printf("\n%dª nota: %.1f", b+1, nota[a][b]);
		
		printf("\nMédia: %.1f", media[a]);
		printf("\n_____________________________\n\n");
	}
	
	return 0;
}
