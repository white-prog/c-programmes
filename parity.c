#include <stdio.h>

char* parity(int number){
    if (number % 2 == 0){
        return "even";
    }else
    {
        return "odd";
    }
    
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Number is : %s",parity(num));

    return 0;
}