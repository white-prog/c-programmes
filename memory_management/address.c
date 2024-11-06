#include <stdio.h>

int main(){

    int n = 50;
    printf("0x%lx\n", &n);
    printf("ox%p",&n);

    return 0;//exit status
}
//& Provides the address of something stored in memory.
// * Instructs the compiler to go to a location in memory.
