#include <stdio.h>

int main(void)
{
		int i;
        printf("insira um numero de 1 a 5\n");
		scanf("%i", &i);

	switch (i) {
		case 1:
			printf("primeiro\n");
			break;
		case 2:
			printf("segundo\n");
			break;
		case 3:
			printf("terceiro\n");
			break;
		default:
			printf("numero nao listado\n");
			break;
	}	
	
        return 0;
}
