//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
int main()
{
    int rows, cols, i, j;
    int sum = 0; // Variable to store the sum of elements

    // Read number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols]; // Declare a 2D array (matrix)

    // Read elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]); // Read each element into the matrix
            sum += matrix[i][j];        // Add the element to sum
        }
    }

    // Print the sum of all elements in the matrix
    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}