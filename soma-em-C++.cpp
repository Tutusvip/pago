//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <locale.h>
#include <iostream>

int main(){
	int n1,n2, rs;
	std::cout << "Digite o 1 numero:\n ";
	std::cin >> n1;
	std::cout << "Digite o 2 numero:\n ";
	std::cin >> n2;
	
	rs=n1+n2;
	
	std::cout << "A soma é"<< rs << std::endl;
	
	return (0);
}
