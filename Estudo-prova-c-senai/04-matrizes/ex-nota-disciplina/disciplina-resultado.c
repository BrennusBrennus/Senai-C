#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2
#define TAM2 3

void final(char mat[TAM][101], float valor[TAM][TAM2], float mediaF[TAM], int c, int d)
{	
	system("cls || clear");
	printf("== Resultado ==\n");
	for (c = 0; c < TAM; c++)
	{
		printf("Disciplina: ");
		puts(mat[c]);
		
		for (d = 0; d < TAM2; d++)
			printf("\n%dª nota: %.1f", d+1, valor[c][d]);
			
		
		printf("\nMédia: %.1f\n", mediaF[c]);;
		
		if (mediaF[c] >= 7)
		{
			printf("Aluno APROVADO");
		} else if (mediaF[c] >= 5)
		{
			printf("Aluno EM RECUPERAÇÂO");
		} else 
		{
			printf("Aluno REPROVADO");
		}
		
		printf("\n------------------------------\n\n");
	}
}

void comeco()
{
	int a, b,
	div = TAM2;
	char dis[TAM][101];
	float nota[TAM][TAM2],
	soma, media[TAM];
	
	for (a = 0; a < TAM; a++)
	{
		printf("Nome da disciplina: ");
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
			
			soma += nota[a][b];
		}
		
		media[a] = soma / div;
		soma = 0;
	}
	
	final(dis, nota, media, a, b);
}

int main()
{
	setlocale(LC_ALL, "");
	
	comeco();
	
	return 0;
}
