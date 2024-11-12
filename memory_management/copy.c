
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    char s[100],*t;

    // Copy string's address
    printf("Enter string: ");
    scanf("%99s",s);

    t = s;
    

    // Capitalize first letter in string
    t[0] = toupper(t[0]);

    // Print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    


    return 0;
}