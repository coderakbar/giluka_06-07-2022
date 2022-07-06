//4. WAP to reverse an array using pointers.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
 
//function created to change our values using pointers 
void change(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//function created to reverse the the given array
void rev(int a[], int a_size)
{
    int *p1 = a;
    int *p2 = a + a_size - 1;
    while (p1 < p2){
        change(p1, p2);
        p1++;
        p2--;
    }
}
 
//function to print the array
void print(int* a, int a_size)
{
 
    int *len1 = a + a_size;
    int *post = a;
    printf("Array = ");
    for (post = a; post < len1; post++){
        printf("%d", *post );
    }    
}
 

int main(void)
{
 
    printf("Please enter the size of your array: \n");
    int n;
    scanf("%d", &n);

    
    int a[n];
 
    printf("Original array: \n");
    print(a, 6);
 
    printf("Reversed array: \n");
    rev(a, 6);
    print(a, 6);
    
}