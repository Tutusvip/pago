#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main(){
	float lado,area,perimetro;
	setlocale(LC_ALL,"Portuguese_Brazil");//define a linguagem recebida
	system("color F0");//coloca uma cor difetente na saida
	
	puts("\n\t Digite a medida do lado do quadrado: ");//Puts é o mesmo qe printf
	scanf("%f", &lado);
	
	area=pow(lado,2);
	perimetro=4*lado;
	
	system("cls");system("color 6f");
	puts("\n\t    **** DADOS DE SAIDA ****");
	printf("\n\n\n\t Área: %.2f, Perimetro = %.2f", area, perimetro);
	return (0);
}
