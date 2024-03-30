#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	float valor, soma;
	
	for (int i = 1; i <= 5; i++)
	{
		printf("Digite o %dº número: ", i);
		scanf("%f", &valor);
		soma += valor;
	}
	
	printf("Soma: %.1f", soma);
	return 0;
}
