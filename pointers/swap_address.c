#include <stdio.h>

/* swaps the value pointed to v1
* with the vlaue pointed by v2. */

void swap(int *v1, int *v2){
    int tmp;
    tmp = *v1;
    *v1 = *v2;
    *v2 = tmp;
}

int main(void){
    int i=1, j=2;
    printf("i=%d, j=%d\n",i,j);
    swap(&i,&j);
    printf("i=%d, j=%d\n",i,j);
    return 0;
}
