#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char *letters = "how jhon eats cheese and burger";
    int vowel = 0;
    for (int i = 0; i < strlen(letters); i++)
    {
        if(letters[i] == 'a' || letters[i] == 'e' || letters[i] == 'i' || letters[i] == 'o' || letters[i] == 'u'){
            vowel += 1;
        }
    }
    printf("This is %d",vowel);

    return 0;
}