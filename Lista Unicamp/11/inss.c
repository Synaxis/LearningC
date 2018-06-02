#include <stdio.h>

int main (void) {
   int idade;
   int contri;
   char sexo;

   //scanea o Sexo
   printf("Digite o seu sexo, M Masculino / F Feminimo\n");
   scanf("%c", &sexo);
   
      if (sexo != 'M' || 'F' ){
      printf("Sexo invalido\n");
      return 0;
      }
   //Scanea idade e tempo de contribuicao
   printf("digite sua idade,seguido pelo tempo de contribuicao\n");
   scanf("%d %d", &idade, &contri); 

      if(idade < 60) {
      printf("Voce precisa de no minimo 60 anos de idade!\n");
      return 0;
      }
      
      if(contri < 10) {
      printf("voce precisa de no minimo 10 anos de experiência\n");
      return 0;
      }      

    if(sexo = 'M' ) {
     if (idade >= 65 && contri >= 10){
         printf("Aposentadoria OK\n");
         return 0;
         }

     if (idade > 62 && contri >= 15) {
         printf("Aposentadoria OK\n");
         return 0;
         }
     else{
         printf("Voce nao esta apto!\n");
         return 0;
      }
   }

   if(sexo = 'F' ) {
     if(idade >= 63 || contri >= 10){
         if( idade >= 61 || contri >= 15){
      printf("Aposentadoria OK\n");
                  return 0;
         }
      }
   }
   
   return 0;
}
    

















   
