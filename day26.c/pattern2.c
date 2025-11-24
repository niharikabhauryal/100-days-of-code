/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main()
{
    int i, j;
    int rows = 5; // Define number of rows

    for (i = 1; i <= rows; i++) // Loop for each row
    {
        for (j = 1; j <= i; j++) // Loop for each column up to the current row number
        {
            printf("*\n"); // Print star followed by a newline
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
