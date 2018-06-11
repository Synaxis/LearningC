#include <stdio.h>

int main() {
	int	i;
	
	printf("Insira um numero inteiro de 1 a 5\n");
	scanf("%i", &i);
	
	switch(i) {
		case 1:
			printf("Recebi 1\n");
		break;
		case 2:
			printf("Recebi 2\n");
		break;
		case 3:
			printf("Recebi 3\n");
		break;
		case 4:
			printf("Recebi 4\n");
		break;
		case 5:
			printf("Recebi 5\n");
		break;
		default:
			printf("opcao nao valida\n");
		break;
	}
	return 0;
}
