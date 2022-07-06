#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    //memory allocated for the pointer
    int *p = (int*)malloc(10*sizeof(*p));

    printf("Please enter 10 digits for your array\n");
    for(int i=0;i<10; i++){
        scanf("%d", p+i);
    }
    
    // printing the array from the pointer
    printf("the array you just entered is = \n");

    for(int i = 0; i < 10;i++){
        printf("%d ", *p + i);
    }

    free(p);

}