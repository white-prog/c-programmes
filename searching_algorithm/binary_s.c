#include <stdio.h>
//This algorihtm is not exactly binary search it goes to middle and then iterate by checking the value you want to find is lesser or more
//then cursor -1 or +1 according to condition
    

int main(){
    int array[] = {2,4,6,8,9,10,11,12,13,18,89,90,98};
    int toFind = 89;
    int len = sizeof(array) / sizeof(array[0]);
    int cursor = (int)len / 2;
    char *isFound = "No";
    int count = 1;
    while(cursor < len && cursor > 0){
        if (array[cursor] == toFind)
        {
            isFound = "Yes";
            break;
            printf("Step %d \n",count);
            count++;
        }else if(toFind > array[cursor]){
            cursor = cursor + 1;
            printf("Step %d \n",count);
            count++;

        }else{
            cursor = cursor - 1;
            printf("Step %d \n",count);
            count++;
        }
        

    }
    if (isFound == "No")
    {
        printf("\nNot found");
    }else
    {
        printf("\n%s number %d found",isFound,toFind);
    }
    
    
    



    return 0;
}