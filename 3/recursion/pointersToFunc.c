#include <string.h>
#include <stdio.h>

int fancystrlen(char* str){
   printf("Pls standby i need to think on this..\n");
   return strlen(str);
}

int main(int argc, char* argv[]){
   char* greet = "hello";
   int (*myfunptr) (char*); //declare

   myfunptr = fancystrlen; //assign

   int i = (*myfunptr) (greet); //invoke
   printf("%d\n",i);
}
