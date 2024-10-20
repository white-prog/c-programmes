#include <stdio.h>


int main(){
    int points[] = {78,69,79,81,56,48,67};
    int len = sizeof(points) / sizeof(points[0]);
    for (int i = 0; i < len; i++)
    {
        if(points[i] >= 65){
            printf("Promoted %d \n",points[i]);
        }else
        {
            printf("Relegated %d \n",points[i]);
        }
        
    }
    

    return 0;
}