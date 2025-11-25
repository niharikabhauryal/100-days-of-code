//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main()
{
    int rows, cols, i, j;

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
        }
    }

    // Perform diagonal traversal
    printf("Diagonal traversal of the matrix is:\n");
    for (int d = 0; d < rows + cols - 1; d++)
    {
        // Determine the starting point of this diagonal
        int r = (d < cols) ? 0 : d - cols + 1;
        int c = (d < cols) ? d : cols - 1;

        // Traverse the diagonal
        while (r < rows && c >= 0)
        {
            printf("%d ", matrix[r][c]); // Print the current element
            r++;
            c--;
        }
    }
    printf("\n");

    return 0;
}
