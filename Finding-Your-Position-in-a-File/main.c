/*
    Author: Matt Johnson
    Subject: file input and output
    Purpose: execute fseek() function
    Date: 04/23/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;
    int len;

    fp = fopen("test_file.txt", "r");
    if (fp == NULL) {

        perror("Error opening file");
        return -1;
    }
    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);

    printf("Total size of test_file.txt = %d bytes\n", len);

    return 0;
}
