#include <stdio.h>

int main(void)
{
    int scores[1024];//index from 0 to 1023
    scores[1] = 999;
    scores[1023] = 150;
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
    //undeclared or unassigned values become garbage value
}