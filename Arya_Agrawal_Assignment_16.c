#include <stdio.h>

int main() {
    int a[100], even[100], odd[100];
    int n, i, e = 0, o = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Partition into even and odd
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            even[e] = a[i];
            e++;
        } else {
            odd[o] = a[i];
            o++;
        }
    }

    // Display even numbers
    printf("\nEven numbers:\n");
    for(i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    // Display odd numbers
    printf("\nOdd numbers:\n");
    for(i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}