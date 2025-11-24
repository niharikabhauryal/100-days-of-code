//Q50: Write a program to print the following pattern:
/*
*****
 ****
  ***
   **
    *


Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>
int main()
{
    int i, j;
    int rows = 5; // Define number of rows

    for (i = 1; i <= rows; i++) // Loop for each row
    {
        // Print leading spaces
        for (j = 1; j < i; j++)
        {
            printf(" "); // Print space
        }
        // Print stars
        for (j = rows - i + 1; j >= 1; j--)
        {
            printf("*"); // Print star
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}