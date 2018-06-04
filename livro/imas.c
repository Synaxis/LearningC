#include <stdio.h>
#include <stdlib.h>
   
int main() {
   char cardName[3]; //this book looks old af
   printf("Enter the card name: ");
   
   scanf("%c", cardName);
   int val;
   if (cardName[0] == 'K') {
      val = 10;
   }
   else if (cardName[0] == 'Q') {
      val = 10;
   }
   
   else if (cardName[0] == 'J') {
      val = 10;
   }
   
   else if (cardName[0] == 'A') {
      val = 11;
      printf("Valete");
   }
   else {
      val = atoi(cardName);
      printf("king / queen\n");
   }   
   
   if (val > 2 || val < 7 ) {
      printf("count has gone up!\n");
      }

   else {
      val == 10;
   }

      //conditional printer
         if ( val == 10){
            printf("the card is a 10\n");
         }         
   
      return 0;
   }
