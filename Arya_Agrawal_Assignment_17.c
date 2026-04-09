int main() {
   int n, i, sign = 1;
    float x, term, sum = 0;
    int fact = 1, power = 1;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i > 1) {
            power *= x * x;              
            fact *= (2*i - 2) * (2*i - 1); 
        }

        term = power / fact;

        sum += sign * term;
        sign = -sign; 
    }

    printf("Sum of sine series = %.5f\n", sum);

    return 0;
}