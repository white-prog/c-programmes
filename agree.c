#include <stdio.h>

int main(){
    char answer;
    printf("Enter do you agree? ");
    scanf("%c",&answer);
    if (answer == 'Y' || answer == 'y'){
        printf("Agree");
    }else{
        printf("Not Agree");

    }
}