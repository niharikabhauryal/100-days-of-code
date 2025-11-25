//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main()
{
    int rows, cols, i, j;

    // Read number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols]; // Declare a 2D array (matrix)
    int row_sums[rows];     // Declare an array to store sum of each row

    // Read elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]); // Read each element into the matrix
        }
    }

    // Calculate the sum of each row
    for (i = 0; i < rows; i++)
    {
        row_sums[i] = 0; // Initialize sum for the current row
        for (j = 0; j < cols; j++)
        {
            row_sums[i] += matrix[i][j]; // Add each element of the row to the sum
        }
    }

    // Print the sum of each row
    printf("The sum of each row is:\n");
    for (i = 0; i < rows; i++)
    {
        printf("%d ", row_sums[i]); // Print sum of each row
    }
    printf("\n");

    return 0;
}