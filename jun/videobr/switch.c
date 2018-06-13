#include <stdio.h>

int main() {
	int i;
	printf("insira um numero\n");
	scanf("%i", &i);
	switch(i) {
		case 1:
			printf("recebi 1\n");
			break;
		case 2:
			printf("recebi 2\n");
			break;
		case 3:
			printf("recebi 3\n");
			break;
		case 4:
			printf("recebi 4");
			break;
		default:
			printf("valor nao reconhecido\n");
		break;
		}
	return 0;
}
