#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]){
    FILE *file = fopen(argv[1],"r");

    char c = fgetc(file);//getting character in file
    while (c != EOF) {
        putchar(c); // Print character to console
        c = fgetc(file); // Read next character
    }

    // Close file
    fclose(file);
    return 0;
 
}