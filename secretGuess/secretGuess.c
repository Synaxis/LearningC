#include <stdio.h>

char secret = '1';

int main(void){
   printf("What is the secret?\n");
   scanf("%c",&secret);
      if(secret == '1'){
         printf("Wow nice job\n");
        }
      else{      
      printf("better luck next time\n");
      }   
   return 0;
} 
