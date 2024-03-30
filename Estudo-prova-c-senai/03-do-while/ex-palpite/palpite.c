// BIBLIOTECAS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	float num, resp = 99;
	
	printf("Adivinha entre 1 e 100\n");
	printf("Digite a resposta: ");
	scanf("%f", &num);
	fflush(stdin);
	
	while (num != resp)
	{
		printf("Errou! ");
			
		num > resp ? printf("É MENOR") : printf("É MAIOR");
			
		printf("\nDigite a resposta: ");
		scanf("%f", &num);
		fflush(stdin);
	}
	
	printf("Acertou!");
		
	return 0;
}
