#include <stdio.h>

int main(){
    int number;double result;
    printf("Enter value: ");
    scanf("%d",&number);

    result = (number * (number + 1)) / 2;

    printf("sum of n numbers : %.0f",result);



    return 0;
}