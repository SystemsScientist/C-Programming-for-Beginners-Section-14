/*
    Author: Matt Johnson
    Subject: file input and output
    Purpose: program finds the number of lines in a file
    Date: 04/24/2023
*/

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "test_file.txt"

int main(void) {

    FILE *fp = NULL;
    char ch;
    int line_counter = 0;

    fp = fopen(FILENAME, "r");

    if(fp == NULL) {

        printf("File does not exist\n");
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF) {

        if (ch == '\n')
            line_counter++;
    }

    fclose(fp);
    fp = NULL;

    printf("Total number of lines are %d\n", line_counter);

    return 0;
}
