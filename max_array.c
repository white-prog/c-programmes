#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array = malloc(4 * sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        printf("Enter value %d : ",i + 1);
        scanf("%d",&array[i]);
    }
    if (array == NULL)
    {
        return 1;
    }
    
    int max = array[0];
    int pos = 0;

    for (int l = 0; l < 4; l++)
    {
        if (array[l] > max)
        {
            max = array[l];
            pos = l;

        }
        
    }
    printf("Maximum value : %d position(0 - length of array) : %d",max,pos);
    
    free(array);


    return 0;
}
