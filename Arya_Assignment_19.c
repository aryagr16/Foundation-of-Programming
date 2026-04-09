#include <stdio.h>
#include <string.h>
#define MAX 100

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;     
    char doj[20];    
    float salary;
};

void totalEmployees(int n);
void countGender(struct EMPLOYEE e[], int n);
void salaryAbove10000(struct EMPLOYEE e[], int n);
void asstManager(struct EMPLOYEE e[], int n);

int main() {
   struct EMPLOYEE e[MAX];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Designation: ");
        scanf(" %[^\n]", e[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Date of Joining: ");
        scanf(" %[^\n]", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    totalEmployees(n);
    countGender(e, n);
    salaryAbove10000(e, n);
    asstManager(e, n);
    return 0;
}

// a) Total number of employees
void totalEmployees(int n) {
    printf("\nTotal Employees = %d\n", n);
}

// b) Count male and female employees
void countGender(struct EMPLOYEE e[], int n) {
    int male = 0, female = 0, i;

    for(i = 0; i < n; i++) {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("Male Employees = %d\n", male);
    printf("Female Employees = %d\n", female);
}

// c) Employees with salary > 10000
void salaryAbove10000(struct EMPLOYEE e[], int n) {
    int i;

    printf("\nEmployees with salary > 10000:\n");

    for(i = 0; i < n; i++) {
        if(e[i].salary > 10000) {
            printf("Name: %s, Salary: %.2f\n", e[i].name, e[i].salary);
        }
    }
}

// d) Employees with designation "Asst Manager"
void asstManager(struct EMPLOYEE e[], int n) {
    int i;

    printf("\nEmployees with designation 'Asst Manager':\n");

    for(i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "Asst Manager") == 0) {
            printf("Name: %s, Salary: %.2f\n", e[i].name, e[i].salary);
        }
    }
}
