#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    char *dna = malloc(99); // Allocate space for the string (100 characters max)

    printf("Enter the DNA sequence: ");
    fgets(dna, sizeof(dna), stdin);
    int a = 0;
    int c = 0;
    int t = 0;
    int g = 0;
    int error = 0;
    for (int i = 0; i < strlen(dna); i++)
    {
        if (dna[i] == 'A'){
            a++;
        }else if(dna[i] == 'C'){
            c++;
        }else if(dna[i] == 'T'){
            t++;
        }else if(dna[i] == 'G'){
            g++;
        }else{
            error++;
        }
    }
    printf("A : %d\n",a);
    printf("C : %d\n",c);
    printf("T : %d\n",t);
    printf("G : %d\n",g);

    
    




    return 0;
}