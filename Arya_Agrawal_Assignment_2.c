#include <stdio.h>

int main()
{
    int choice;
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\nMENU");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Addition = %.2f\n", num1 + num2);
        break;

    case 2:
        printf("Subtraction = %.2f\n", num1 - num2);
        break;

    case 3:
        printf("Multiplication = %.2f\n", num1 * num2);
        break;

    case 4:
        if (num2 != 0)
            printf("Division = %.2f\n", num1 / num2);
        else
            printf("Division by zero is not allowed.\n");
        break;

    default:
        printf("Invalid choice.\n");
    }

    return 0;
}