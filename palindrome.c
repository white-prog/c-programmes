#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ispalindrome(char *word) {
    int length = strlen(word);
    char *reversed = (char *)malloc((length + 1) * sizeof(char)); // Allocate memory for reversed string
    if (reversed == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return;
    }

    // Reverse the string
    for (int i = 0; i < length; i++) {
        reversed[i] = word[length - 1 - i]; // Fill reversed string
    }
    reversed[length] = '\0'; // Null-terminate the reversed string

    // Check if the original string is equal to the reversed string
    if (strcmp(word, reversed) == 0) {
        printf("%s is a palindrome\n", word);
    } else {
        printf("%s is not a palindrome\n", word);
    }

    
}



int main(){
    ispalindrome("palindrome");
    ispalindrome("peep");
    
    

    return 0;
}