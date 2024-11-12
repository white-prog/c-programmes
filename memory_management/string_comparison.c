#include <stdio.h>
#include <string.h>

int main(){
    int i,j;
    printf("Enter 2 values: ");
    scanf("%d %d",&i,&j);
    if (i == j)
    {
        printf("\nSame");
    }else{
        printf("\nDifferent");
    }

    char *name = "messi";
    char *player = "neymar";
    char *pl = "messi";

    if (name == pl)
    {
        printf("\nSame");
    }else{
        printf("\nDifferent");
    }
    if (strcmp(name,player) == 0)
    {
        printf("\nideal");
    }else{
        printf("\nnot ideal");
    }
    printf("\n%p\n",name);
    printf("\n%p\n",player);
    printf("\n%c\n",*(pl));
    printf("over");



    return 0;
}