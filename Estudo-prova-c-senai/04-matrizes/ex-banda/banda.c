#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2
#define TAM2 3

int main()
{
	setlocale(LC_ALL, "");

	int a, b;
	char banda[TAM][101],
	nome [TAM][TAM2][101];
	
	for (a = 0; a < TAM; a++)
	{
		printf("Digite o nome da banda: ");
		fgets(banda[a], 101, stdin);
		fflush(stdin);
		
		for (b = 0; b < TAM2; b++)
		{
			printf("\n%dº integrante: ", b+1);
			fgets(nome[a][b], 101, stdin);
			fflush(stdin);
		}
		
		system("cls || clear");
	}
	
	for (a = 0; a < TAM; a++)
	{
		printf("Banda: ");
		puts(banda[a]);
		
		for (b = 0; b < TAM2; b++)
		{
			printf("\n%dº integrante: ", b+1);
			puts(nome[a][b]);
		}
		
		printf("\n--------------------\n");
	}
	
	return 0;
}
