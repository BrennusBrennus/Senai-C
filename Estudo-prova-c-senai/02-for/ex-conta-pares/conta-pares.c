#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	printf("Contador de pares entre 100 e 120\n\n");
	
	for (int i = 101; i < 119; i ++)
	{
		if (i % 2 == 1)
			continue;
		else 
			printf("%d ", i);
	}
	
	return 0;
}
