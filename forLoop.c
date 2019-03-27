#include <stdio.h>

int main(void){
    int i, nRead, numberOfNums=0, total=0, values;
    float average;

    printf("How many numbers you want to read?\n");
    scanf("%d", &numberOfNums);
    
    nRead = scanf("%d", &values);    

    for(i=0; i<numberOfNums; i++) {
    scanf("%d", &values);
    total += values; //same as total = total + value;
    printf("Read %d\n", values);
    }
    average = (float)total / numberOfNums;
        if (average != (float)total)
        printf("exceeded the maximum length!\n");
        
    else
    printf("You read %d values . Average = %f.\n", numberOfNums, average);    
    return (0);
}














