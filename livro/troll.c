#include <stdio.h>	

int main() {
	char caio[5] = {'c','a','i','o','\0'};
	

	printf("strings em C sao um array de chars\n");
	printf("o "\0" significa NULL character , para que a maquina PARE DE LER o array");
	printf("%s\n" ,caio);
	
	return 0;
}
