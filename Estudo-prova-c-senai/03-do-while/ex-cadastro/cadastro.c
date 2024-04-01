#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

void final(int pessoas, int maior, int menor, int qtd5k, float media)
{
	system("cls || clear");
	printf("Quantidade de pessoas cadastradas: %d", pessoas);
	printf("\nMaior idade: %d", maior);
	printf("\nMenor idade: %d", menor);
	printf("\nMulheres que recebem a partir de R$5000: %d", qtd5k);
	printf("\nMédia salarial total: R$%.2f", media);
}

int confirma()
{
	int resposta;
	
	printf("\n\n");
	printf("Código | Descrição");
	printf("\n   1   | Adicionar pessoa");
	printf("\n   2   | Exibir dados e sair\n");
	scanf("%d", &resposta);
	
	return resposta;
}

void comeco()
{
	int idade, pessoasCadastradas,
	maiorIdade = INT_MIN,
	menorIdade = INT_MAX,
	salario5k, cont, resp;
	
	char sexo = ' ';
	float soma, salario, mediaSalarial;
	
	do 
	{
		printf("Idade: ");
		scanf("%d", &idade);
		fflush(stdin);
		if (idade > maiorIdade) maiorIdade = idade;
		if (idade < menorIdade) menorIdade = idade;
		
		do
		{
			printf("Sexo (m/f): ");
			scanf("%c", &sexo);
			fflush(stdin);
			sexo = tolower(sexo);
		} while (sexo != 'f' && sexo != 'm');
		
		printf("Salário: ");
		scanf("%f", &salario);
		soma += salario;
		
		cont++;
		if (sexo != 'm' && salario >= 5000) salario5k++;
		pessoasCadastradas++;
		
		resp = confirma();
		system("cls || clear");
	} while (resp != 2);

	mediaSalarial = soma/cont;
	final(pessoasCadastradas, maiorIdade, menorIdade, salario5k, mediaSalarial);
}

int main()
{
	setlocale(LC_ALL, "");
	
	comeco();
	
	return 0;
}
