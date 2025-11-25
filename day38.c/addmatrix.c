//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main()
{
    int rows1, cols1, rows2, cols2, i, j;

    // Read number of rows and columns for the first matrix
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    int matrix1[rows1][cols1]; // Declare first 2D array (matrix)

    // Read elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]); // Read each element into the first matrix
        }
    }

    // Read number of rows and columns for the second matrix
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // Check if matrices can be added
    if (rows1 != rows2 || cols1 != cols2)
    {
        printf("Error: Matrices must have the same dimensions to be added.\n");
        return 1;
    }

    int matrix2[rows2][cols2]; // Declare second 2D array (matrix)

    // Read elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]); // Read each element into the second matrix
        }
    }

    int sum_matrix[rows1][cols1]; // Declare a 2D array to store the sum

    // Add the two matrices
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j]; // Add corresponding elements
        }
    }

    // Print the resulting sum matrix
    printf("The sum of the two matrices is:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            printf("%d ", sum_matrix[i][j]); // Print each element of the sum matrix
        }

        printf("\n"); // New line after each row
    }
    return 0;
}