#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int valor;
	
	do
	{
		printf("Digite um valor: ");
		scanf("%d", &valor);
	} while (valor < 0 || valor > 10);
	
	return 0;
}
