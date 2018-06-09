#include <stdio.h>

int main(void) {

   int i, nOfNums=0, total=0, value;
   float average;
   
   printf("How many numbers are to be read ?\n");
   scanf("%d", &nOfNums);
   for(i=0; i<nOfNums; i++) {
      scanf("%d",&value);
      total += value;
      printf("Read %d\n",value);
   }
   
   average = (float)total / nOfNums;
   printf("You read %d values. Average = %f\n", nOfNums, average);
   return (0);
}
