/*
    Author: Matt Johnson
    Subject: file input and output
    Purpose:
    Date: 04/15/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;
    int c;      // char c; can also be used

    fp = fopen("test_file1.txt", "r");

    if(fp == NULL) {

        perror("Error in opening file.");
        return -1;
    }

    // read a single char
    while((c = fgetc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);
    fp = NULL;

    return 0;
}
