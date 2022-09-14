#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define PRECO

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	char nome[80];
	float pr;
	int q;

	printf("Digite o produto: ");
	scanf("%s", &nome);
	printf("Digite o preço: ");
	scanf("%f", &pr);
	printf("Digite a quantidade: ");
	scanf("%d", &q);	
	printf("Produto: %s\n total a pagar: %2.f",nome, pr*q);
	
	return(0);
}
