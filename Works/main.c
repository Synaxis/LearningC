#include <stdio.h>
#include <stdlib.h>

int main(void)

{   char f,m,l,o;
    int idade;

    scanf("%c %c %c %d" ,&f, &m, &l, &o, &idade);
    printf("Minhas iniciais : %c%c%c e minha idade é %d.\n", f,m,l,o,idade);
    return 0;
}
