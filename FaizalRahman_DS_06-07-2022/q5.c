// 5. Write a program that will read a line and delete from it all occurrences of a
// particular word using pointers.

#include <stdio.h>
#include <string.h>

//the core function being declared
void remall(char *s, char *rem);

int main()
{
    char s[100];
    char rem[100];

    printf("Enter your string: ");
    gets(s);
    printf("Enter the word to remove: ");
    gets(rem);

    printf("String before removing '%s' : \n%s", rem, s);

    remall(s, rem);

    printf("\n\nString after removing '%s' : \n%s", rem, s);

    return 0;
}

//the function removes a word from a string or sentence
void remall(char *s, char *rem)
{
    
    int i, j, slen, remlen;
    int found;

    //function to give the length of our strings
    slen = strlen(s);
    remlen = strlen(rem);

    //first loop keeps running the code till the right word is found
    for (i = 0; i <= slen - remlen; i++)
    {
        found = 1;

        //breaking if the word is not found
        for (j = 0; j < remlen; j++)
        {
            if (s[i + j] != rem[j])
            {
                found = 0;
                break;
            }
        }

        

        if (s[i + j] != ' ' && s[i + j] != '\t' && s[i + j] != '\n' && s[i + j] != '\0')
        {
            found = 0;
        }

        //deleting the right string from the sentence using this loop
        if (found == 1)
        {
            for (j = i; j <= slen - remlen; j++)
            {
                s[j] = s[j + remlen];
            }

            slen = slen - remlen;

            i--;
        }
    }
}