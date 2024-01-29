#include<stdio.h>

int a[100][100];
int c[10000][3]; // Assuming the size of c is enough to store non-zero elements
int i, j, m, n, k;
int count = 0;

int main() {
    printf("enter the no of rows and columns in matrix: ");
    scanf("%d%d", &m, &n);

    printf("enter the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    k = 1;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != 0) {
                c[k][0] = i;
                c[k][1] = j;
                c[k][2] = a[i][j];
                k++;
                count++;
            }
        }
    }

    c[0][0] = m;
    c[0][1] = n;
    c[0][2] = count;

    printf("Original matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Sparse matrix representation:\n");
    for (i = 0; i <= count; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
