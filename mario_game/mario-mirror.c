#include <stdio.h>

int main(){
    int number_of_times;
    do
    {
        printf("Enter how tall pyramid you want? ");
        scanf("%d",&number_of_times);
        
    } while (number_of_times <= 0);
    

    //mirror pyramid
    for (int i = 1; i <= number_of_times; i++)
    {
        for (int j = 1; j <= number_of_times; j++)
        {
            if (j > number_of_times - i)
            {
                printf("#");
            }else
            {
                printf(" ");
            }
            
            
            
        }
        printf("\n");
        
    }

    
    
    
    

    return 0; 
}