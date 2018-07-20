#include <stdio.h>

int main(void) {
    int i, qtNumeros = 0, total, valor;

    float media;
    
    printf("Quantos numeros voce quer ler ?\n");
    scanf("%d", &qtNumeros);

    for(i=0; i<qtNumeros; i++) {
        scanf("%d",&valor);
        total += valor;
        printf("Eu li %d\n", valor);
    }
    
    media = (float)total / (float)qtNumeros; //o (float) é pra formatar, so é necessario 1 , mas colocamos 2 pra deixar mais "bonito"
    printf(" Voce leu %d valores.  Media = %f.\n",qtNumeros, media);
    return 0;
}
