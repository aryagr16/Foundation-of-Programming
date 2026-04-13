#include <stdio.h>
#define MAX 10
int main() {
   int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int r, c, i, j;

    // Step 2: Read order
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Step 3: Read matrices
    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &A[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &B[i][j]);

    // Step 4: Addition
    printf("\nMatrix Addition:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Step 5: Saddle Point
    int found = 0;
    for(i=0;i<r;i++) {
        int min = A[i][0], col = 0;

        for(j=1;j<c;j++) {
            if(A[i][j] < min) {
                min = A[i][j];
                col = j;
            }
        }

        int k;
        for(k=0;k<r;k++) {
            if(A[k][col] > min)
                break;
        }

        if(k == r) {
            printf("\nSaddle Point: %d\n", min);
            found = 1;
        }
    }
    if(!found)
        printf("\nNo Saddle Point\n");

    // Step 6: Inverse (only 2x2)
    if(r == 2 && c == 2) {
        float det;
        det = A[0][0]*A[1][1] - A[0][1]*A[1][0];

        if(det != 0) {
            printf("\nInverse Matrix:\n");
            printf("%.2f %.2f\n", A[1][1]/det, -A[0][1]/det);
            printf("%.2f %.2f\n", -A[1][0]/det, A[0][0]/det);
        } else {
            printf("\nInverse not possible (det = 0)\n");
        }
    } else {
        printf("\nInverse only for 2x2 matrix\n");
    }

    // Step 7: Magic Square
    if(r == c) {
        int sum = 0;

        for(j=0;j<c;j++)
            sum += A[0][j];

        int isMagic = 1;

        // rows
        for(i=0;i<r;i++) {
            int rowSum = 0;
            for(j=0;j<c;j++)
                rowSum += A[i][j];

            if(rowSum != sum) {
                isMagic = 0;
                break;
            }
        }

        // columns
        for(j=0;j<c && isMagic;j++) {
            int colSum = 0;
            for(i=0;i<r;i++)
                colSum += A[i][j];

            if(colSum != sum) {
                isMagic = 0;
                break;
            }
        }

        // diagonals
        int d1=0, d2=0;
        for(i=0;i<r;i++) {
            d1 += A[i][i];
            d2 += A[i][r-i-1];
        }

        if(d1 != sum || d2 != sum)
            isMagic = 0;

        if(isMagic)
            printf("\nMatrix is a Magic Square\n");
        else
            printf("\nMatrix is NOT a Magic Square\n");
    } else {
        printf("\nMagic square requires square matrix\n");
    }

    // Step 8: Display done automatically above

    return 0;
}