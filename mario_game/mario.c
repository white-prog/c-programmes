#include <stdio.h>

int main(){
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        { 
            if (j < 4)
            {
                printf(" ");
            }else
            {
                printf("#");
            }
            
            
            
            
        }
        printf("\n");
        
    }
    
    for (int i = 0;i < 10;i++){
        printf("?");
    }
    printf("\n");

    return 0;
}