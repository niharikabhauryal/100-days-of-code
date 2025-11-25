//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>
int main()
{
    int rows, cols, i, j;

    // Read number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];       // Declare a 2D array (matrix)
    int transpose[cols][rows];    // Declare a 2D array for transpose

    // Read elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]); // Read each element into the matrix
        }
    }

    // Compute the transpose of the matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j]; // Assign transposed values
        }   
    }
    // Print the transpose of the matrix
    printf("The transpose of the matrix is:\n");    
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]); // Print each element of the transposed matrix
        }
        printf("\n"); // New line after each row
    }
    return 0;
}