#include <stdio.h>
#include <string.h>

int strlength(char letters[]){
    int count = 0;
    while (letters[count] != '\0'){
        count += 1;
    }
    return count;
    


}
//command line arguments
int main(int argc,char *argv[]){
    if(argc == 1){
        printf("More arguments needed");
    }else{
        char name[20] = "messi";
        int num = strlen(name);
        int num2 = strlength(name);
        printf("Name is %s %s have this length %d %d",name,argv[1],num,num2+1);

    }

    return 0;
}
