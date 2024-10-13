#include <stdio.h>

int ArrayLen(int arr[]){
    int count = 0;
    while (arr[count] != '\0')
    {
        count++;
    }
    return count;
}

int main(){
    int numbers[] = {40,35,50,23,98};
    for(int i = 0; i < ArrayLen(numbers);i++){

        if(numbers[i] == 50){
            printf("50 Found");
        }
    }



    return 0;
}