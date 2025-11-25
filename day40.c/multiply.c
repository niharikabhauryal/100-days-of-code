//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
int main()
{
    int rows1, cols1, rows2, cols2, i, j, k;

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

    // Check if matrices can be multiplied
    if (cols1 != rows2)
    {
        printf("Error: Number of columns in the first matrix must be equal to number of rows in the second matrix.\n");
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

    int result[rows1][cols2]; // Declare result matrix

    // Initialize result matrix to zero
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Multiply the two matrices
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            for (k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j]; // Multiply and accumulate
            }
        }
    }
    // Print the resulting product matrix
    printf("The product of the two matrices is:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            printf("%d ", result[i][j]); // Print each element of the result matrix
        }
        printf("\n"); // New line after each row
    }
    return 0;

}
