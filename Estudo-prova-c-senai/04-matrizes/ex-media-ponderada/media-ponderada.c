// bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

// diretivas
#define TAM 2
#define TAM2 3

// fim do programa
void final(int c, int d, float media[TAM], char mat[TAM][101], float notas[TAM][TAM2])
{
	system("cls || clear");
	
	// imprimindo dados
	for (c = 0; c < TAM; c++)
	{
		printf("Disciplina: ");
		puts(mat[c]);
		
		for (d = 0; d < TAM2; d++)
			printf("%dª nota: %.1f\n", c+1, notas[c][d]);
		
		printf("\nMédia: %.1f\n", media[c]);
		printf("\n_______________________\n\n");
	}
}

void comeco()
{
	// declaração de variáveis
	int a, b;
	char dis[TAM][101];
	
	float nota[TAM][TAM2],
	peso[3] = {3, 3, 4}, 
	somaPond,
	mediaPond[TAM],
	totalPeso = 10;
	
	// entrada de dados
	for (a = 0; a < TAM; a++)	
	{
		printf("Disciplina: ");
		fgets(dis[a], 101, stdin);
		fflush(stdin);
		
		for (b = 0; b < TAM2; b++)
		{
			do
			{
				printf("%dª nota: ", b+1);
				scanf("%f", &nota[a][b]);
				fflush(stdin);
			} while (nota[a][b] < 0 || nota[a][b] > 10);
			
			somaPond += nota[a][b] * peso[b];
		}
		
		mediaPond[a] = somaPond / totalPeso;
		somaPond = 0;
		printf("\n\n");
	}

	// encaminhamento para o fim do programa
	final(a, b, mediaPond, dis, nota);
	
}			

int main()
{
	setlocale(LC_ALL, "");
	
	comeco();
	
	return 0;
}
