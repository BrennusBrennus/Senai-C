#include <stdio.h>
#include <locale.h>

void result(int par, int impar)
{
	printf("\nQuantidade de n�meros pares digitados: %d\n", par);
	printf("Quantidade de n�meros �mpares digitados: %d", impar);
}

void header()
{
	int pair, odd, num;
	
	for (int i = 1; i <= 5; i++)
	{
		printf("Digite o %d� n�mero: " , i);
		scanf("%d", &num);
			
		num % 2 == 0 ? pair++ : odd++;
	}

	result(pair, odd);
}

int main()
{
	setlocale(LC_ALL, "");
	
	header();
	
	return 0;
}
