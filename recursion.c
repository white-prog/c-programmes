#include <stdio.h>
void draw(int n){

    for (int i = n; i > 0; i--)
    {
        printf("#");
    }
    draw(n-1);

    


}

int main(){



    draw(5);

    return 0;
}