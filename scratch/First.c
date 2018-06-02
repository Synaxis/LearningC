#include <stdio.h>

int main(void)
{
    char f,m,l,z; // first , medium, last
    int age;

    printf("Please enter your 4 Initials , and your Age!.\n");
    scanf("%c %c %c %c %d", &f, &m, &l, &z, &age);

    printf("Your Inititals are: %c%c%c%c and my age is %d.\n",f,m,l,z,age);

    return (0);
}
