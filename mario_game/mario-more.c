#include <stdio.h>

int main(){

    for(int i = 1; i <= 4;i++){
        for (int j = 1; j <= 10; j++)
        {
            if (j == 5 || j == 6 || (i == 1 && (j < 4 || j > 7)) || (i == 2 && (j < 3 || j > 8)) || (i == 3 && (j < 2 || j > 9)))
            {
                printf(" ");
            }else{
                printf("#");
            }
            
        }
        printf("\n");
        

    }
    //Ask user to prompt in between 1 to 8



    return 0;
}