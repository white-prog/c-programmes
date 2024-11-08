#include <stdio.h>
#include <string.h>

int main(){
    //pointer is variable that contain memory address of some value.
    int n = 50;
    int num = 40;
    int *p = &n;
    int *ptr = &num;
    printf("0x%lx\n",p);
    printf("0x%lx\n",ptr);
    printf("%d\n",*p);
    char s[] = "HI!";
    printf("%p\n",&s);
    printf("0x%lx\n", &s[0]);
    printf("0x%lx\n", &s[1]);
    printf("0x%lx\n", &s[2]);
    printf("0x%lx\n", &s[3]);
    printf("%i\n",p);
    //using pointer to create a string

    char *name = "Messi";
    printf("%s\n",name);



    return 0;
}