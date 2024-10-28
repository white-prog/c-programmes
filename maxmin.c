#include <stdio.h>

int main(){
    int num1,num2,num3;
    num1 = 28;
    num2 = 89;
    num3 = 45;
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is greater",num1);
    }else if (num2 > num1 && num2 > num3)
    {
        printf("%d is greater",num2);
    }else{
        printf("%d is greater",num3);
    }
    
    




    return 0;
}