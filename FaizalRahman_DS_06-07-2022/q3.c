// 3. WAP to find the nth element of the fibonacci series using recursion.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int fibonaccifunc(int);

int main(void)
{
    int n;
    int final;

    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }
    else
    {
        final = fibonaccifunc(n);
        printf("The %d number in fibonacci series is %d\n", n, final);
    }
    
}

//function created to generat fibonacci numbers
int fibonaccifunc(int n)
{
    //return nothing when input is 0
    if (n == 0)
    {
        return 0;
    }

    //return only one when input is one
    else if (n == 1)
    {
        return 1;
    }
    
    //algorithm created to generate the sequence till input nth value 
    else
    {
        return (fibonaccifunc(n - 1) + fibonaccifunc(n - 2));
    }
}