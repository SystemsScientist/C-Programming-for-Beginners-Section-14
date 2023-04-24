/*
    Author: Matt Johnson
    Subject: file input and output
    Purpose: program prints the contents of a file in reverse
    Date: 04/24/2023

    Instructions:

        1. write a program that will print the contents of a file
           in reverse order

        2. use the fseek function to seek to the end of the file

        3. use the ftell function to get the position of the file
           pointer

        4. display as output the file in reverse order
*/

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "test_file.txt"

int main(void) {

    FILE *fp = NULL;
    int counter = 0;
    int i = 0;

    fp = fopen(FILENAME, "r");

    if (fp == NULL) {
        printf("test_file.txt does not exist\n");
        return -1;
    }

    // moves file pointer to end of file
    fseek(fp, 0, SEEK_END);

    // get position of file pointer
    counter = ftell(fp);

    while (i < counter) {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    printf("\n");
    fclose(fp);
    fp = NULL;

    return 0;
}
