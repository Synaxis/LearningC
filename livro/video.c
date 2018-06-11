#include <stdio.h>

int main() {
	
	int contador;
	
	for (contador = 1; contador <= 10; contador++) {
		printf("contador eh: %i\n", contador);
		if (contador >= 10) {
			printf("cheguei ao 10\n");
		} 
	}	

	return 0;
}
