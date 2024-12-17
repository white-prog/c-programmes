#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    int plus = 0;
    int minus = 0; 
    int zero = 0;
    if (argc < 2){
        printf("Error");
        return 1;
    }
    for (int i = 1; i < argc; i++)
    {
        if(atoi(argv[i]) > 0){
            plus++;
        }else if(atoi(argv[i]) < 0){
            minus++;
        }else{
            zero++;
        }
    }
    double val1 = plus / (double)(argc - 1);
    double val2 = minus / (double)(argc - 1);
    double val3 = zero / (double)(argc - 1);
    printf("EVERY VALUE APPEARANCE PROBABILITY: \n");
    printf("%.2f\n%.2f\n%.2f",val1,val2,val3);

    //./PLUSMINUS 1 23 44 -29 0 - run like this


    return 0;
}