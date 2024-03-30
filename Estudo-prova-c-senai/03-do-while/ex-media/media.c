#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void result(float average)
{
	// comentei o for com brackets para testar o comando if else(if) sem eles	
	if (average >= 7)
		printf("aprovado");
	else if (average >= 5)
		printf("recuperação");
	else
		printf("reprovado");
	/*
	if (average >= 7)
	{
		printf("Aluno aprovado");
	} else if (average >= 5)
	{
		printf("Aluno em recuperação");
	} else
	{
		printf("Aluno reprovado");
	}*/
}

int main()
{
	setlocale(LC_ALL, "");

	float soma, nota, valor, cont, media;

	for (int i = 1; i <= 3; i++)
	{
		do
		{
			printf("Digite a %dª nota: ", i);
			scanf("%f", &nota);
		} while (nota < 0 || nota > 10);
		
		soma += nota;
		cont++;
		system("cls || clear");
	}
	
	media = soma/cont;
	printf("Média: %.1f\n", media);
	
	result(media);
	
	return 0;
}
