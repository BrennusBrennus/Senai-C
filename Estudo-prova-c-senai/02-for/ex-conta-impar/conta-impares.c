#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	printf("Conta �mpares entre 1 e 20\n");
	
	for (int i = 2; i < 20; i ++)
	{
		if (i % 2 == 0)
			continue;
		else
			printf("%d ", i);
	}
	
	return 0;
}
