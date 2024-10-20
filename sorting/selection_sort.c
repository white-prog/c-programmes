#include <stdio.h>

int main(){
    int numbers[7] = {5,1,3,2,4,6,9};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    int min = numbers[0];
    int pos = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            if(numbers[j] < min){
                min  = numbers[j];
                pos = j;

            }
            numbers[pos] = numbers[i];
            numbers[i] = min;
        }
       
        
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ",numbers[i]);
    }
    //it's not working want to update code .......
    

    return 0;
}
