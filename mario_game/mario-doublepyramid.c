#include <stdio.h>

int main(){
    int height = 8;
        
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= (height * 2) + 2; j++)
        {
            if (j == ((height*2) + 2)/2 || j ==  (((height*2) + 2)/2) + 1 || j < (((height*2) + 2)/2)-i || j > ((((height*2) + 2)/2) + 1) + i)
            {
                printf(" ");
                //printf("_ %d %d",j,i);
            }else{
                printf("#");
                //printf("# %d %d",j,i);
            }
        }
        printf("\n");
        //program will continue development not completed
    }

    


    return 0;
}