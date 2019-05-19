#include <stdio.h>

int main(void) {
	
	int vetor[10];
	int numeroInserido;
	int i, j;
	int acertos = 0;
	
	//cria um loop para armazenar os 10 numeros
		printf("Insira 10 numeros para guardar\n");
		for (i=0; i<10; i++) {		
			scanf("%d", &vetor[i]);
		}

	printf("digite um numero\n");
	scanf("%d", &numeroInserido);


	for (j=0; j<10; j++) {
		if (numeroInserido == vetor[j]) {
			acertos++;

			printf("numero de acertos %d", acertos);
		}
	}
	

	return 0;
	
}
