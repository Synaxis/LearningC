#include <string.h>
#include <stdio.h>

int myStrlen(char *str){
   printf("Pls , standby I need cray for this...\n");
   return strlen(str);
}

int main(int argc, char* argv[]){
   char* greet = "hello";
   int (*myfunptr) (char*);
   
   myfunptr = myfancystrlen;
   
   int i = (*myfunptr) (greet);
   printf("%d\n,i");
}
