#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//#include <iostream>

int main(){
	int n1,n2, rs;

	printf("Digite o 1 numero:\n ");
	scanf("%i", &n1);
	printf("Digite o 2 numero:\n ");
	scanf("%i", &n2);	

	
	rs=n1+n2;
	
	printf("A soma é: %i", rs);	
	return (0);
}
