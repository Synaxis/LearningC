#include <stdio.h>

int main(void){

    //store the variables for the initials and age
    char f,m,l;
    int age;
    
    scanf("%c %c %c %d", &f, &m, &l, &age);
        
    printf("My initials are: %c%c%c and my age is %d.\n",f,m,l,age);
    return (0);
}
