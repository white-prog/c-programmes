#include <stdio.h>

int main(){
    int arr[] = {2,1,5,7,3,4,8};
    int length = sizeof(arr)/sizeof(arr[0]);
    int temp;
    
    printf("First: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }

    
    printf("\nSorted: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    
    



    return 0;
}