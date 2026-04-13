#include <stdio.h>
#include <stdlib.h>


int main() {
   FILE *source, *destination;
    char ch;
    char sourceFile[100], destinationFile[100];

    // Input file names
    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destinationFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error opening source file.\n");
        exit(1);
    }

    // Open destination file in write mode
    destination = fopen(destinationFile, "w");
    if (destination == NULL) {
        printf("Error opening destination file.\n");
        fclose(source);
        exit(1);
    }

    // Copy contents character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    // Close files
    fclose(source);
    fclose(destination);

    return 0;
}