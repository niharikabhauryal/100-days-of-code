//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main()
{
    int num, first_digit, last_digit, num_digits = 0, temp_num, swapped_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp_num = num;
    last_digit = temp_num % 10; // Extract the last digit

    // Find the first digit and count the number of digits
    while (temp_num >= 10)
    {
        temp_num /= 10;
        num_digits++;
    }
    first_digit = temp_num; // The first digit
    num_digits++; // Total number of digits

    // If the number has only one digit, no swap needed
    if (num_digits == 1)
    {
        swapped_num = num;
    }
    else
    {
        // Remove the first and last digits from the original number
        int middle_part = (num % (int)pow(10, num_digits - 1)) / 10;

        // Construct the new number with swapped digits
        swapped_num = last_digit * (int)pow(10, num_digits - 1) + middle_part * 10 + first_digit;
    }

    printf("Number after swapping first and last digit: %d\n", swapped_num);
    return 0;
}