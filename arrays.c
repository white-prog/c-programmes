#include <stdio.h>

int len(int arr[]){
    int count = 0;
    while (arr[count] != '\0')
    {
        count += 1;
    }
    return count;
    
}
int multiple(int num){
    return num * 2;
}


int main(){
    int arr[10] = {1,2,3,4,5};
    int arr2[12];
    for (int i = 0; i < len(arr); i++)
    {
        arr2[i] = arr[i] * 2;
    }
    for (int j = 0; j < len(arr2); j++)
    {
        printf("%d ",arr2[j]);
    }
    
    int number1 = multiple(5);
    printf("\nA function initialized to variable %d",number1);
    


}