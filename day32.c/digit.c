//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main()
{
    int number, digit, i;
    int count[10] = {0}; // Array to store count of each digit (0-9)

    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Count occurrences of each digit
    while (number > 0)
    {
        digit = number % 10; // Extract the last digit
        count[digit]++;      // Increment the count for this digit
        number /= 10;        // Remove the last digit
    }

    // Find the digit with the maximum occurrences
    int max_count = 0;
    int most_frequent_digit = 0;
    for (i = 0; i < 10; i++)
    {
        if (count[i] > max_count)
        {
            max_count = count[i];
            most_frequent_digit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", most_frequent_digit);

    return 0;
}