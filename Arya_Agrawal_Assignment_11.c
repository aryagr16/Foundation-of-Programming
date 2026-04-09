#include <stdio.h>
#include <math.h>

int main() {
    int num, choice, i, isPrime = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("1.Square Root\n2.Square\n3.Cube\n4.Prime\n5.Factorial\n6.Prime Factors\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Square Root = %.2f\n", sqrt(num));
            break;

        case 2:
            printf("Square = %d\n", num * num);
            break;

        case 3:
            printf("Cube = %d\n", num * num * num);
            break;

        case 4:
            if (num <= 1) isPrime = 0;
            for (i = 2; i <= num/2; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
                printf("Prime number\n");
            else
                printf("Not prime\n");
            break;

        case 5:
            for (i = 1; i <= num; i++)
                fact *= i;
            printf("Factorial = %lld\n", fact);
            break;

        case 6:
            printf("Prime factors: ");
            for (i = 2; i <= num; i++) {
                while (num % i == 0) {
                    printf("%d ", i);
                    num /= i;
                }
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}