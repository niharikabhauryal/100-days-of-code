//Q46: Write a program to print the following pattern:
/*
*****
*****
*****
*****
*****
Sample Test Cases:
Output:     
*****
*****
*****
*****
*****

*/
#include <stdio.h>
int main()
{
    int i, j;
    int rows = 5, cols = 5; // Define number of rows and columns

    for (i = 1; i <= rows; i++) // Loop for each row
    {
        for (j = 1; j <= cols; j++) // Loop for each column
        {
            printf("*"); // Print star
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}