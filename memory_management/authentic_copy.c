#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
    //malloc : allocate block of specific size of memory
    //free : tell compiler to free block of memory previously alloted
    char *s;
    printf("Enter word: ");
    scanf("%s",s);
    if (s == NULL)
    {
        return 1;//code if some error happen
    }
    s[strlen(s)] = '\0';

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;//code if some error happen
    }


    for (int i = 0; i <= strlen(s); i++)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);
    //copied with for loop iteration through array of characters
    printf("s : %s\n",s);
    printf("t : %s\n",t);
    
    //making another copy of s with strcpy

    char *another = malloc(strlen(s) + 1);
    if (another == NULL)
    {
        return 1;//code if some error happen
    }
    strcpy(another,s);
    for (int i = 0; i < strlen(s); i++)
    {
        another[i] = toupper(another[i]);
    }
    printf("another : %s",another);

    //Free blocks previously allocated by malloc
    free(t);
    free(another);
    return 0;

    

}