#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str2[100], temp[100];
    int i, len = 0, flag = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) {
        len++;
    }
    printf("\nLength of string = %d\n", len);

    for(i = 0; i < len; i++) {
        temp[i] = str[len - i - 1];
    }
    temp[len] = '\0';

    printf("Reversed string = %s\n", temp);

    printf("\nEnter another string for comparison: ");
    scanf(" %[^\n]", str2);

    if(strcmp(str, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    for(i = 0; i < len; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("String is a palindrome\n");
    else
        printf("String is not a palindrome\n");

    if(strstr(str, str2) != NULL)
        printf("'%s' is a substring of '%s'\n", str2, str);
    else
        printf("'%s' is NOT a substring of '%s'\n", str2, str);

    return 0;
}