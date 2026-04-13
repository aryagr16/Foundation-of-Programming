#include <stdio.h>
#include <string.h>


int main() {
     char str1[100], str2[100], temp[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\n--- String Operations Menu ---\n");
    printf("1. Calculate Length\n");
    printf("2. Copy String\n");
    printf("3. Concatenate Strings\n");
    printf("4. Compare Strings\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of first string: %ld\n", strlen(str1));
            printf("Length of second string: %ld\n", strlen(str2));
            break;

        case 2:
            strcpy(temp, str1);
            printf("First string copied to temp: %s\n", temp);
            break;

        case 3:
            strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;

        case 4:
            if (strcmp(str1, str2) == 0) {
                printf("Strings are equal\n");
            } else {
                printf("Strings are not equal\n");
            }
            break;

        case 5:
            return 0;

        default:
            printf("Invalid choice\n");
    }


    return 0;
}