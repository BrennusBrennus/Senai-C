#include <stdio.h>
#include <locale.h>

void resultado(float adc, int cont)
{
	printf("M�dia: %.1f", adc/cont);
}

int main()
{
	setlocale(LC_ALL, "");
	
	float nota, soma;
	int contador = 0;
	
	for (int i = 1; i <= 2; i ++)
	{
		printf("Digite a %d� nota: ", i);
		scanf("%f", &nota);
		soma += nota;
		contador ++;
	}
	
 	resultado(soma, contador);
 	
 	return 0;
}
