#include <stdio.h>
#include <locale.h>

void resp(int numero)
{
	numero % 2 == 0 ? printf("Número par") : printf("Número ímpar");
}

int main()
{
	setlocale(LC_ALL, "");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	resp(num);
	
	return 0;
}
