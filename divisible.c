#include <stdio.h>
#include <stdbool.h>

bool checkDivisible(int num1,int num){
    if (num1 % num == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main(){

    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int i = 10;
    while(i <= 20){
        if(checkDivisible(number,i)){
            printf("He can divide me %d\n",i);
        }else{
            printf("He can't divide me %d\n",i);
        }
        i++;
    }


    return 0;
}