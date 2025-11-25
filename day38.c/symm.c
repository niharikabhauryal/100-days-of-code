//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
int main()  
{
    int rows, cols, i, j;
    int is_symmetric = 1; // Flag to check if the matrix is symmetric

    // Read number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // A matrix can only be symmetric if it is square
    if (rows != cols)
    {
        printf("False\n");
        return 0;
    }

    int matrix[rows][cols]; // Declare a 2D array (matrix)

    // Read elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]); // Read each element into the matrix
        }
    }

    // Check if the matrix is symmetric
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                is_symmetric = 0; // Set flag to false if any element doesn't match
                break;
            }
        }
        if (!is_symmetric)
        {
            break; // Exit outer loop if not symmetric
        }
    }

    // Print the result
    if (is_symmetric)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}