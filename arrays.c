#include <stdio.h>

int len(int arr[]){
    int count = 0;
    while (arr[count] != '\0')
    {
        count += 1;
    }
    return count;
    
}
int *doubled(int arr[],int length){
    for (int i = 0; i < length; i++)
    {
        arr[i] = arr[i] * 2;
    }
    return arr;

}

int main(){
    int arr[10] = {1,2,3,4,5};
    printf("%d",len(arr));
    


}