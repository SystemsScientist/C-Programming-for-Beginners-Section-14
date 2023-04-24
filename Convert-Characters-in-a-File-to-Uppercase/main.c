/*
    Author: Matt Johnson
    Subject: file input and output
    Purpose: program converts characters in a file to uppercase
    Date: 04/24/2023

    Instructions:

        1. write a program that converts all characters of a file
           to uppercase and write the results out to a temporary
           file

        2. rename the temporary file to the original filename and

        3. remove the temporary filename

        4. use the fgetc and fputc functions

        5. use the rename and remove functions

        6. use the islower function

        7. convert a character to upper case by subtracting 32
           from it

        8. display the contents of the original file to standard
           output in uppercase
*/

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "test_file.txt"

int main(void) {

    FILE *fp = NULL;
    FILE *fp1 = NULL;
    char ch;

    fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        printf("File does not exist\n");
        return -1;
    }

    // create temp file
    fp1 = fopen("temp_file.txt", "w");

    if (fp1 == NULL) {
        printf("Temp file does not exist\n");
        return -2;
    }

    // read file
    while ((ch = fgetc(fp)) != EOF) {
        if (islower(ch)) {
            ch = ch - 32;
        }

        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);

    // rename temp file to test_file.txt file
    rename("temp_file.txt", FILENAME);

    // remove temp file
    remove("temp_file.txt");

    fp = fopen(FILENAME, "r");

    if (fp == NULL) {
        printf("test_file.txt does not exist\n");
        return -3;
    }

    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
    fp = NULL;
    fp1 = NULL;

    return 0;
}
