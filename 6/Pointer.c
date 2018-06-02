#include <stdio.h>

void int main(void){
   
   int count =99,someVal=1;
   int *pCount = &count;
   count = *pCount + 1;
   printf("count is:"  "%s",&count\n");
}
