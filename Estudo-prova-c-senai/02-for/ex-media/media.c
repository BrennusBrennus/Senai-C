#include <stdio.h>
#include <locale.h>

void resultado(float valor, float cont)
{	
	printf("\nM�dia: %.1f\n", valor/cont);
	if (valor/cont >= 7)
	{
		printf("Aluno aprovado");
	} else if (valor/cont >= 5)
	{
		printf("Aluno em recupera��o");
	} else
	{
		printf("Aluno reprovado");
	}
}

int main()
{
	setlocale(LC_ALL, "");
	
	float nota, soma, contador;

	printf("Escola Brenaura e Laureno\n");
	
	for (int i = 1;i <= 3; i ++)
	{
		printf("Digite a %d� nota: ", i);
		scanf("%f", &nota);
		
		soma += nota;
		contador++;
	}
	
	resultado(soma, contador);
		
	return 0;
}
