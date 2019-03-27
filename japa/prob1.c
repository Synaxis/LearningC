#include <stdio.h>
#include <string.h>
 
int main()
{
   char a1[100];
   char b2[100];

   int tamanho1;
   int tamanho2;
 
   printf("entre duas strings\n");
   scanf("%c", &a1[tamanho1]);
   scanf("%c", &b2[tamanho2]);

   tamanho1 = strlen(a1);
   tamanho2 = strlen(b2);
	
	if (tamanho1 > tamanho2) {
	  printf("A Maior string eh: ", tamanho1);
	}
	

 
   return 0;
}
