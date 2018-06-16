#include <stdio.h>

int main() {
	int x;
	void imprimaMensagem(void);//declara a função
	imprimaMensagem();//chama a função

	
	return 0;
}

void imprimaMensagem(void) {
	printf("fui chamado\n");
}
