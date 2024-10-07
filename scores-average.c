#include <stdio.h>

float average(int number_of_elements,int sum_of_elements){
    return sum_of_elements/number_of_elements;
}

int main(){
    //collect array as user inputs
    //print its average
    int how_many;
    printf("Enter how many teams partcipating: ");
    scanf("%d",&how_many);

    int scores[how_many];
    for (int i = 0; i < how_many; i++)
    {
        int score;
        do
        {
            printf("Enter value: ");
            scanf("%d",&score);
        } while (score < 0);
        scores[i] = score;
        
    }

    int sum  = 0;
    for (int i = 0; i < how_many; i++)
    {
        sum += scores[i];
    }

    printf("Average: %.1f",average(how_many,sum));
    
    

    return 0;
}