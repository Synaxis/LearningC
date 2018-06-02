#include <stdio.h>

//the preprocesso when it sees this define , will replace MAX with the val of 10
#define MAX 10

int main(void)
{
    int data [MAX];
    int i,j,tmp;
    FILE *fp;
    
    /* read in the data */
    fp = fopen("input.txt", "r");
    if(fp == NULL) {
        printf("Could not open file.\n");
        return (0);
    }

    for(i=0; i<MAX; i++) {
        printf("Enter Item #%d: ",i);
        scanf("%d",&data[i]);
    }

    printf("You entered the following items:\n");
    for(i=0; i<MAX; i++) {
        printf("item #%d: %d\n",i,data[i]);
    }

    /*( simple sort */
    for(i=0; i<MAX; i++) {
        for(j=0; j<MAX; j++) {
            if(data[i] > data[j]) {
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }

    printf("\nSorted data:\n");
    for(i=0; i<MAX; i++) {
        printf("item#%d: %d\n",i,data[i]);
    }

return (0);
}