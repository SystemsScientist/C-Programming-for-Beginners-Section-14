/*
    Author: Matt Johnson
    Subject: file input and output
    Purpose: execute fgetpos() function
    Date: 04/23/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;
    fpos_t position;

    fp = fopen("test_file.txt", "w+");
    fgetpos(fp, &position);
    fputs("Hello, World!", fp);

    fsetpos(fp, &position);
    fputs("This is going to override previous content\n", fp);
    fclose(fp);

    return 0;
}
