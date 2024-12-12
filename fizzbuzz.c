#include <stdio.h>
void fizzBuzz(int number){
    if (number % 3 == 0  && number % 5 == 0)
    {
        printf("FizzBuzz");
    }else if(number % 3 == 0){
        printf("Fizz");
    }else if(number % 5 == 0){
        printf("Buzz");
    }else
    {
        printf("%d",number);
    }


}




int main(){
    printf("---ENTER VALUE AND YOU WILL CHECKS WHETHER DIVISIBLE BY 3 OR 5 || 3 AND 5 ------")
    int num1 = 1;
    int num2;
    printf("Enter value: ");
    scanf("%d",&num2);
    while (num1 <= num2)
    {
        fizzBuzz(num1);
        printf("\n");
        num1++;
    }
    
    



    return 0;
}