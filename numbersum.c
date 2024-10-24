#include <stdio.h>
#include <string.h>


int main(){
    char input[100];
    printf("Enter number: ");
    scanf("%s",&input);

    int sum = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        sum += input[i] - '0';
    }
    printf("\n::%d",sum);
    
    return 0;
    
}