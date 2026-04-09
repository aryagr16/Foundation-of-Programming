#include <stdio.h>
// Recursive function
int factorial_recursive(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

// Iterative function
int factorial_iterative(int n) {
    int fact = 1, i;
    for(i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}
int main() {
     int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        printf("Factorial (Iterative): %d\n", factorial_iterative(num));
        printf("Factorial (Recursive): %d\n", factorial_recursive(num));
    }

    return 0;
}