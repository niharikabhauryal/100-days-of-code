//Q47: Write a program to print the following pattern:
/*
**
***
****
*****


Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

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
            printf("*"); // Print star
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}