#include <stdio.h>
#include <string.h>


//cria uma nova lista de arrays (arrays de arrays) .Primeira lista tem tamanho não definido, por isso é "Ilimitada"
char tracks [][80] = {
    "i left my heart in Harvard Med School",
    "Newyork, Newyork...",
    "Dancing with a Dork",
    "From here  to maternity",
    "The girl from Iwo Jima",
};

void find_track(char search_for[]) {
    int i;
    for (i = 0; i < 5; i++) { // usa no minimo 5 chars pra encontrar uma palavra ("dork, left , heart")
        if(strstr(tracks[i], search_for))// se o resultado for encontrado
        printf("Track %i: %s\n", i, tracks[i]); //mostrar resultado
    }
}

int main() {
    char search_for[80];//adiciona o array de arrays que criamos 
    printf("Search for: "); //pergunta ao usuario encontrar a musica a particar da letra
    fgets(search_for, 80, stdin);//semelhante ao scanf 
    find_track(search_for); // agora chamamos a função search_for()
    return 0;
}
