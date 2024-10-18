#include <stdio.h>
//A kind of data structure
typedef struct
{
    char *player_name;
    int jersey_no;
    int career_goals;
    int career_trophies_no;

}player;



int main(){
    //declaring type player1 name messi and giving attributes or properties of messi
    player player1;
    player1.player_name = "Messi";
    player1.jersey_no = 10;
    player1.career_goals = 867;
    player1.career_trophies_no = 46;

    int jerseyno;
    printf("Enter messi jersey no: ");
    scanf("%d",&jerseyno);
    if (jerseyno == player1.jersey_no)
    {
        for (int  i = 0; i < 3; i++)
        {
            printf("Correct \n");
        }
        
    }else if (jerseyno == 7)
    {
        printf("Siuuuuuuu");
    }else
    {
        printf("Not correct");
    }
    
    





    return 0;
}