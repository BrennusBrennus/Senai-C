#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float calc(float num1, float num2)
{
	return (num1 + num2)/2;
}



int main()
{
	setlocale(LC_ALL, "");
	
	float primus, secundus, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &primus);
	printf("Digite a segunda nota: ");
	scanf("%f", &secundus);

	media = calc(primus, secundus);
	
	system("cls || clear");
	
	printf("Média: %.1f\n\n", media);
	
	printf("Com if/else\n");
	if (media >= 7)
		printf("Aluno aprovado");
	else
		printf("Aluno reprovado");
		
	printf("\n\nCom ternário\n");
	media >= 7 ? printf("Aluno aprovado") : printf("Aluno reprovado");
	
	return 0;
}
