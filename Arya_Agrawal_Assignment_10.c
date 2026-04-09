#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;
    int i, n;
    long long fact = 1;

    printf("1.Add 2.Subtract 3.Multiply 4.Divide 5.Power 6.Factorial\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %.2lf\n", num1 + num2);
            break;

        case 2:
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %.2lf\n", num1 - num2);
            break;

        case 3:
            scanf("%lf %lf", &num1, &num2);
            printf("Result = %.2lf\n", num1 * num2);
            break;

        case 4:
            scanf("%lf %lf", &num1, &num2);
            if(num2 != 0)
                printf("Result = %.2lf\n", num1 / num2);
            else
                printf("Division by zero not allowed.\n");
            break;

        case 5:
            scanf("%lf %lf", &num1, &num2);
            result = 1;
            for(i = 1; i <= num2; i++)
                result *= num1;
            printf("Result = %.2lf\n", result);
            break;

        case 6:
            scanf("%d", &n);
            for(i = 1; i <= n; i++)
                fact *= i;
            printf("Factorial = %lld\n", fact);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}