#include <stdio.h>
#include <locale.h>

float adicao(float num1, float num2)
{
	return num1 + num2;
}

float sub(float num1, float num2)
{
	return num1 - num2;
}

float mult(float num1, float num2)
{
	return num1 * num2;
}

float div(float num1, float num2)
{
	return num1 / num2;
}

int main()
{
	setlocale(LC_ALL, "");
	
	float a, b, mais, menos, multiplica, divide;
	
	printf("Operador matemático\n\n");
	printf("Digite um valor: ");
	scanf("%f", &a);
	printf("Digite outro valor: ");
	scanf("%f", &b);
	
	mais = adicao(a,b);
	menos = sub(a,b);
	multiplica = mult(a,b);
	divide = div(a,b);
	
	printf("\n%.1f + %.1f = %.1f", a, b, mais);
	printf("\n%.1f - %.1f = %.1f", a, b, menos);
	printf("\n%.1f x %.1f = %.1f", a, b, multiplica);
	printf("\n%.1f : %.1f = %.1f", a, b, divide);
	return 0;
}
