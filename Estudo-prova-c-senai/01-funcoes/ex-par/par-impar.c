#include <stdio.h>
#include <locale.h>

void resp(int numero)
{
	numero % 2 == 0 ? printf("N�mero par") : printf("N�mero �mpar");
}

int main()
{
	setlocale(LC_ALL, "");
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	resp(num);
	
	return 0;
}
