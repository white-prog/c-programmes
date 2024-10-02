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
    //I solved it by simply drawing table and 4 rows and 10 columns in it if there '#' not present i make it empty else print '#'



    return 0;
}