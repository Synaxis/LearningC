#include <stdio.h>

int main(void) {

 double dolar = 0.0;
 double quantAconverter;
 double realConvertido;

 
 printf("Dolar USD : BRL R$ por \n");

 printf("Por favor digite a cotacao do dolar de hoje: ");

 dolar = scanf("%d", dolar);

 
 printf("Por favor digite a quantia a ser convertida: "); 
 quantAconverter =scanf("%d", quantAconverter);
 realConvertido = (dolar * quantAconverter);

 printf("O valor da quantia de dolar em reais eh %d" ,realConvertido);

 return 0;
}
 
