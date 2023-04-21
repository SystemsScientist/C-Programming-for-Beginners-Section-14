/*
    Author: Matt Johnson
    Subject: file input and output
    Purpose:
    Date: 04/21/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp = NULL;

    fp = fopen("write_file_test3.txt", "w+");

    if(fp != NULL) {
        fprintf(fp, "%s %s %s %s %d\n", "Hello", "my", "number", "is", 555);
    }

    fclose(fp);

    return 0;
}
