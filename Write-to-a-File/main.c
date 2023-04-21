/*
    Author: Matt Johnson
    Subject: file input and output
    Purpose:
    Date: 04/21/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;
    int ch;

    fp = fopen("write_file_test.txt", "w+");

    for (ch = 33; ch <= 100; ch++) {
        fputc(ch, fp);
    }

    fclose(fp);

    return 0;
}
