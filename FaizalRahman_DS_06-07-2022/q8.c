//8. Write a program to find and replace a pattern (series of characters) in a sentence.
//Sentence and pattern are taken from the user.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

//function created to find and replace
char* replace(const char* s1, const char* s0,const char* s2)
{

    char* final;
    int i, count = 0;
    int s2len = strlen(s2);
    int s0len = strlen(s0);
 
    //this loop runs and sees if the complete word is a copy of the word user asked to replace
    for (i = 0; s1[i] != '\0'; i++) {
        if (strstr(&s1[i], s0) == &s1[i]) {
            count++;
 
            i += s0len - 1;
        }
    }
    
    //final word needs its own space so alloted
    final = (char*)malloc(i + count * (s2len - s0len) + 1);
 
    i = 0;

    //now while this pointer doesn't become null
    while (*s1) {
        
        //the statement checking if each word is a copy
        if (strstr(s1, s0) == s1) {
            strcpy(&final[i], s2);
            i += s2len;
            s1 += s0len;
        }
        else{
            final[i++] = *s1++;
        }    
    }
 
    final[i] = '\0';
    return final;
}
 
int main()
{
    printf("Please enter your sentence: \n");
    char string[100];
    scanf("%[^\n]",string);

    printf("Please enter the word you wish to edit: \n");
    char key[100];
    scanf("%s", key);

    printf("Please enter the word you wish to edit to: \n");
    char keyc[100];
    scanf("%s", keyc);
 
    char* final = NULL;
 
    printf("Old string: %s\n", string);
 
    final = replace(string, key, keyc);

    printf("New String: %s\n", final);
 
    free(final);
    
    return 0;
}

