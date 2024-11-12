
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    char s[100];

    // Copy string's address
    printf("Enter string: ");
    scanf("%99s",s);

    char *t = s;
    

    // Capitalize first letter in string
    if (strlen(t) > 0){

        t[0] = toupper(t[0]);
    }
    // Print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    


    return 0;
}