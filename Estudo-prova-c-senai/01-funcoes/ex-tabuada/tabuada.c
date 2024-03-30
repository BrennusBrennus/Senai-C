#include <stdio.h>
#include <locale.h>


void calc(int num)
{
	for (int i = 1; i <= 10; i ++)
		printf("%d x %d = %d\n", num, i, num*i);
}

int main()
{
	setlocale(LC_ALL, "");
	
	int fator;
	
	printf("=== TABUADA ===");
	printf("\nDigite o fator: ");
	scanf("%d", &fator);
	printf("----------------------\n");
	
	calc(fator);
	
	return 0;
}
