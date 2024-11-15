#include <stdio.h>
#include <string.h>

int main(void)
{
    // Open CSV file
    FILE *file = fopen("phonebook.csv", "a");//open file in edit mode
    if (!file)
    {
        return 1;
    }


    // Get name and number
    char *name = "jhon sebastian";
    char *number = "+91 7510879140";

    // Print to file
    fprintf(file, "Name : %s,Number : %s\n", name, number);
    FILE *file_read = fopen("phonebook.csv", "r");//open file in read mode

    char c = fgetc(file_read);
    while (c != EOF) {
        putchar(c); // Print character to console
        c = fgetc(file_read); // Read next character
    }

    // Close file
    fclose(file);
    fclose(file_read);
}