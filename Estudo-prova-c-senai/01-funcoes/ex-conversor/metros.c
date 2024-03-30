#include <stdio.h>
#include <locale.h>

float calc(float mt)
{
	return mt * 100;
}

int main()
{
	setlocale(LC_ALL, "");
	
	float metros, centi;
	
	printf("=== Conversor m para cm ===");
	printf("\nDigite o valor: ");
	scanf("%f", &metros);
	
	centi = calc(metros);
	
	printf("%.f metros = %.f centímetros", metros, centi);
	
	return 0;
}
