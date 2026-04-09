#include <stdio.h>

int main() {
     float basic, hra, ta, gross, professional_tax, net;

    printf("Enter the basic pay of the employee: ");
    scanf("%f", &basic);

    hra = 0.10 * basic;  
    ta = 0.05 * basic;    

    gross = basic + hra + ta;

    professional_tax = 0.02 * gross;

    net = gross - professional_tax;

    printf("\nBasic Pay: %.2f\n", basic);
    printf("HRA (10%%): %.2f\n", hra);
    printf("TA (5%%): %.2f\n", ta);
    printf("Gross Salary: %.2f\n", gross);
    printf("Professional Tax (2%%): %.2f\n", professional_tax);
    printf("Net Salary Payable: %.2f\n", net);

    return 0;
}