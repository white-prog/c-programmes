#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int number;
    struct node *next;

}node;

int main(){
    node *list = NULL;
    node *n = malloc(sizeof(node));
    n -> number = 12;
    n -> next = NULL;
    list = n;
    node *m = malloc(sizeof(node));
    m -> number = 20;
    m -> next = list;
    list = m;
    while (list != NULL)
    {
        printf("%i\n", list->number);
        list = list->next;
    }
    

    return 0;
}