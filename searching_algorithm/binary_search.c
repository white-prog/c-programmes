#include <stdio.h>
//Binary  search :: checking number in a sorted array


int main(){
    int scores[] = {10,20,30,40,60,70};
    int searching_number;
    printf("Enter value(from 0 to 100): ");
    scanf("%d",&searching_number);

    int len = sizeof(scores) / sizeof(scores[0]);//If we allot memory to scores array variable this method doesn't work
    int low = 0;
    int high = len - 1;
    
    
    while (1 == 1)
    {
        int mid = (low + high) / 2;
        if (low > high || high < low)
        {
            printf("not found");
            break;
        }
        
        else if(scores[mid] == searching_number){
            printf("Found");
            break;
        }else if (searching_number > scores[mid])
        {
            low = mid + 1;
        }else if (searching_number < scores[mid])
        {
            high  = mid - 1;
        }
        
        
    }

    


    return 0;
}