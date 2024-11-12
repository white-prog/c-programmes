#include <stdio.h>

int main(){
    int first = 0;
    int second = 1;
    int third = first + second;
    printf("%d %d %d",first,second,third);
    for (int i = 0; i < 10; i++)
    {
        first = second;
        second = third;
        third = first + second;
        printf(" %d",third);

    }
    
    // can add scanf to take user input and using arrays to store value and print it out.


    return 0;
}