/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*


Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*



*/
#include <stdio.h>
int main()
{
    int i, j;
    int rows = 5; // Define number of rows for the upper half

    // Upper half of the pattern
    for (i = 1; i <= rows; i++) // Loop for each row
    {
        for (j = 1; j <= (2 * i - 1); j++) // Print odd number of stars
        {
            printf("*"); // Print star
        }
        printf("\n"); // Move to the next line after each row
    }

    // Lower half of the pattern
    for (i = rows - 1; i >= 1; i--) // Loop for each row in reverse
    {
        for (j = 1; j <= (2 * i - 1); j++) // Print odd number of stars
        {
            printf("*"); // Print star
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}