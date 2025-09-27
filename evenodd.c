//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include <stdio.h>
int main()
{
    int number;
    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd using if-else
    if (number % 2 == 0) 
    {
        printf("%d is even\n", number);
    } 
    else if (number % 2 != 0)
    {
        printf("%d is odd\n", number);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}