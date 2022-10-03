//9. WAP to find and remove the duplicate occurrences of an element in an
//array and display the modified array.

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", a + i);
    }

    //loop removes a duplicate element if found
    for(int i = 0; i < n; i++){
        for(int j = 0; j<i;j++){
            if(a[i]==a[j]){
                n = n - 1;
                int k = i;
                for(int l = k; l < n;l++){
                    a[l] = a[l+1];
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }


    return 0;
}

