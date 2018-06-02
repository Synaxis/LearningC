#include <stdio.h>

int main(void){
    int i, numberOfNums=0, total=0, value;
    float average;

    printf("How many numbers are to be read?\n");
    scanf("%d", &numberOfNums);
    
    valsead = scanf("%d", &value);    

    for(i=0; i<numberOfNums; i++) {
    scanf("%d", &value);
    total += value; //same as total = total + value;
    printf("Read %d\n", value);
    }
    average = (float)total / numberOfNums;
        if (average != (float)total)
        printf("you are too dumb!\n");
        
    else
    printf("You read %d values . Average = %f.\n", numberOfNums, average);    
    return (0);
}














