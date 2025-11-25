//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main()
{
    int n, i, j;
    int diagonal_sum = 0; // Variable to store the sum of diagonal elements

    // Read size of the square matrix
    printf("Enter the number of rows and columns (n x n): ");
    scanf("%d", &n);

    int matrix[n][n]; // Declare a 2D array (square matrix)

    // Read elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]); // Read each element into the matrix
        }
    }

    // Calculate the sum of main diagonal elements
    for (i = 0; i < n; i++)
    {
        diagonal_sum += matrix[i][i]; // Add the diagonal element to sum
    }

    // Print the sum of main diagonal elements
    printf("The sum of main diagonal elements is: %d\n", diagonal_sum);

    return 0;
}