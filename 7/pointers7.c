#include <stdio.h>

int main(void){
   int count = 99;
   int *pCount = &count;
   count = *pCount + 1;
   printf("count is now %i", count);
   return count;
}

