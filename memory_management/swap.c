#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a =  *b;
    *b = temp;
}
int main(){

    int x = 2;
    int y = 4;
    int *p = &x;
    printf("%i and %i before",x,y);
    printf("\n0x%lx and 0x%lx",&x,&y);
    printf("--------");
    swap(&x,&y);
    printf("\n%i and %i after",x,y);
    printf("\n0x%lx and 0x%lx",&x,&y);
    printf("\n%d",*p);//*p checks for value at that memory address
    
    


    //swaping values in variables used pointers to swap it because x and y have scope in main function only
    //another use of memory address is in scanf using scanf("%data type",&address of variable) to store
    //to input strings using scanf no &address needed just put variable name
    //in fixed variable declaration static allocation of memory takes place in malloc and free to allocate memory run time and free it
    //heap overflow : touching areas of memory not allocated
    //stack overflow: calling functions infinetly overflows available memory
    //both are called buffer overflow

    return 0;
}