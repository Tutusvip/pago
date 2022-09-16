#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main(){
	float base,altura,perimetro;
	setlocale(LC_ALL,"Portuguese_Brazil");//define a linguagem recebida
	system("color F0");//coloca uma cor difetente na saida
	
	puts("\n\t Digite a medida do lado do quadrado: ");
	scanf("%f", &base);
	puts("\n\t Digite a medida do lado do quadrado: ");
	scanf("%f", &altura);
	
	perimetro=2*(base*altura);
	
	system("cls");system("color 6f");
	puts("\n\t    **** DADOS DE SAIDA ****");
	printf("\n\n\n\t area: %.2f, Perimetro = %.2f", base*altura, perimetro);
	return (0);
}
