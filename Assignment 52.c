#include <stdio.h>

int main() {
    int i, j, rows, cols, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("\nEnter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];  
        }
    }

    printf("\nSum of all elements of the matrix = %d\n", sum);

    return 0;
}