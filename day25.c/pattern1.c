//Q49: Write a program to print the following pattern:
/*
5
45
345
2345
12345


Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include <stdio.h>
int main()
{
    int i, j;
    int rows = 5; // Define number of rows

    for (i = 1; i <= rows; i++) // Loop for each row
    {
        for (j = rows - i + 1; j <= rows; j++) // Loop for each column starting from (rows - current row + 1) to rows
        {
            printf("%d", j); // Print the current column number
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}