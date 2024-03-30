#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2
#define TAM2 3

void comeco()
{
	int a, b;
	
	char nome[TAM][101];
	float nota[TAM][TAM2];
	
	for (a = 0; a < TAM; a++)
	{
		printf("Nome do aluno: ");
		fgets(nome[a], 101, stdin);
		fflush(stdin);
		
		for (b = 0; b < TAM2; b++)
		{
			printf("%dª nota: ", b+1);
			scanf("%f", &nota[a][b]);
			fflush(stdin);
		}
	}
	
	system("cls || clear");
	
	for (a = 0; a < TAM; a++)
	{
		printf("Aluno: %s", nome[a]);
		
		for (b = 0; b < TAM2; b++)
			printf("\n%dª nota: %.1f", b+1, nota[a][b]);
		
		printf("\n\n");
	}
}

int main()
{
	setlocale(LC_ALL, "");

	comeco();
	
	return 0;
}
