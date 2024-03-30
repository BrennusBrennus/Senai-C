#include <stdio.h>
#include <locale.h>

float calc(float valor)
{		
	valor < 100 ? (valor += (valor * 0.1)) : (valor += (valor * 0.2));
	
	return valor;
}

int main()
{
	setlocale(LC_ALL, "");
	
	float preco, valorFinal;
	
	printf("Digite o preço do produto: ");
	scanf("%f", &preco);
	
	valorFinal = calc(preco);
	
	printf("Valor reajustado: R$%.2f", valorFinal);
	
	return 0;
}
