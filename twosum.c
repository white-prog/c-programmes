#include <stdio.h>

int main(){
    int array[] = {2,3,14,1,7,8};
    int length = sizeof(array)/sizeof(array[0]);
    int max = array[0];
    int first_val;
    int second_val;

    for (int  i = 0; i < length-1; i++)
    {
        if ((array[i] + array[i+1]) > max)
        {
            max = array[i] + array[i+1];
            first_val = i;
            second_val = i + 1;
        }
        
    }
    
    printf("%d : index %d %d",max,first_val,second_val);

    return 0;
}