#include <stdio.h>

int main(){
    int numbers[7] = {5,1,3,8,4,6,9};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    for (int i = 0; i < length; i++){

        for (int j = i+1; j < length; j++)
        {
            if(numbers[j] < numbers[i]){
                int min = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = min;

            }
            
        }
       
        
    }

    for (int i = 0; i < length; i++){
        printf("%d ",numbers[i]);
    }
    //corrected it want more test cases.......
    

    return 0;

}