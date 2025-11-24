//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>
int main()
{
    int binary_num, digit, ones_complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary_num);

    while (binary_num > 0)
    {
        digit = binary_num % 10; // Extract the last digit
        if (digit == 0)
        {
            ones_complement += 1 * place; // Change 0 to 1
        }
        // If digit is 1, do nothing (it remains 0 in the complement)
        binary_num /= 10; // Remove the last digit
        place *= 10; // Move to the next place value
    }

    printf("1's Complement: %d\n", ones_complement);
    return 0;
}