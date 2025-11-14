//Q124: Take two filenames from the user – a source file and a destination file. 
//Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    int ch;

    // Taking filenames from the user
    printf("Enter the source file name: ");
    scanf("%99s", sourceFileName);

    printf("Enter the destination file name: ");
    scanf("%99s", destFileName);

    // Open source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    // Open destination file in write mode
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Error opening destination file!\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy character by character from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    // Confirmation message
    printf("File copied successfully to %s\n", destFileName);

    return 0;
}