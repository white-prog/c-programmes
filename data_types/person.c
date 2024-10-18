#include <stdio.h>
#include <string.h>
typedef struct{
    char *name;
    char *mobile_no;

}person;

int main(){
    person people[2];
    people[0].name = "messi";
    people[0].mobile_no = "+1-623-456363";

    people[1].name = "Oppenheimer";
    people[1].mobile_no = "+1-623-342526";

    char *name;
    printf("Enter name: ");
    scanf("%s",&name);

    for (int i = 0; i < 2; i++)
    {
        printf("%s",people[i].name);
        if (strcmp(people[i].name,name) == 0)
        {
            printf("Found %s %s",people[i].name,people[i].mobile_no);//strcmp not work
        }
        
    }
    
    



    return 0;
}