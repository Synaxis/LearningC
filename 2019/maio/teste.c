#include <stdio.h>

int main(void) {
	int valores[10];
	int i;
	
	printf("Digite 10 numeros\n");
	
	for(i=0; i<10; i++) {

		scanf("%d", &valores[i]);
		if (valores[i] % 2 == 0) {
				printf("valores pares são: %d\n", valores[i]);
			}else{
		printf("valores impares são: %d\n", valores[i]);
		}
	}
	//armazenou valores[i]	

	return 0;

}	
