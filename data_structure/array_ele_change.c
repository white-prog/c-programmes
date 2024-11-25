#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[] = {1,2,3,4,5,6};
    int *changed = malloc(6 * sizeof(int));
    for(int i = 0; i < 6; i++)
    {
        changed[i] = arr[i] * 2;
    }
    for (int j = 0; j < 6; j++)
    {
        printf("%d  ",changed[j]);
    }
    free(changed);

    





    return 0;
}