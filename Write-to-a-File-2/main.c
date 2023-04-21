/*
    Author: Matt Johnson
    Subject: file input and output
    Purpose:
    Date: 04/21/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *file_pointer;

    file_pointer = fopen("write_file_test2.txt", "w+");

    fputs("This is Jason Fedin's course.\n", file_pointer);
    fputs("I am happy to be here.\n", file_pointer);

    fclose(file_pointer);

    return 0;
}
