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
    char str[61];

    // open file for reading
    fp = fopen("test_file.txt", "r");

    if(fp == NULL) {

        perror("Error opening file.\n");
        return -1;
    }

    if(fgets(str, 60, fp) != NULL) {

        // write content to stdout
        puts(str);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
