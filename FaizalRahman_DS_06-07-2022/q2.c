//2. WAP to find the number of occurences of each element of an array in that array.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>

int main(void){
    int n;
    printf("please enter the size of your array: ");
    scanf("%d", &n);

    int a[n];

    printf("Please enter your array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //key part to know about the occurences of element
    int key;
    printf("Enter the number you wish to know the occurences of: \n");
    scanf("%d", &key);
    
    //for loop scans the complete array and gets you the number of occurences
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            count++;
        }
    }

    printf("The number of occurences of your element are: %d", count);


}