#include <stdio.h>

    struct student {
    int roll;
    char name[50];
    float marks[3];
    float total;
    float percentage;
};

int main() {
    struct student s[10];
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i+1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);


        printf("Enter marks in 3 subjects: ");
        for(j = 0; j < 3; j++) {
            scanf("%f", &s[i].marks[j]);
        }

        // Calculate total
        s[i].total = 0;
        for(j = 0; j < 3; j++) {
            s[i].total += s[i].marks[j];
        }

        // Calculate percentage
        s[i].percentage = s[i].total / 3;
    }

    printf("\nStudent Results:\n");
    for(i = 0; i < n; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%\n", s[i].percentage);
    }

    return 0;
}