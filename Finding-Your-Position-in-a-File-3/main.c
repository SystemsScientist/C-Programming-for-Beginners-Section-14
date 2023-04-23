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

    fp = fopen("test_file.txt", "w+");
    fputs("This is Matthew\n", fp);

    fseek(fp, 20, SEEK_SET);
    fputs("Hello, how are you?", fp);

    fclose(fp);

    return 0;
}
