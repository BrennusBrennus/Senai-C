#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
	setlocale(LC_ALL, "");
	
	char resp;
	int nota;
	
	do
	{
		printf("Insira uma nota: ");
		scanf("%d", &nota);
		fflush(stdin);
		
		printf("Deseja inserir outra nota (S/N)? ");
		scanf("%c", &resp);
		fflush(stdin);
		resp = toupper(resp);
	} while (resp != 'N');
	
	return 0;
}
