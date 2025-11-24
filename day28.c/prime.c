/*
Q55: Write a program to print all the prime numbers from 1 to n.


Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int main()
{
    int n, i, j, is_prime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    for (i = 2; i <= n; i++) // Start from 2 as 1 is not a prime number
    {
        is_prime = 1; // Assume the number is prime

        // Check for factors from 2 to sqrt(i)
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0) // If i is divisible by j, it's not prime
            {
                is_prime = 0; // Mark as not prime
                break; // No need to check further
            }
        }

        if (is_prime) // If the number is prime, print it
        {
            printf("%d ", i);
        }
    }
    printf("\n"); // New line after printing all primes
    return 0;
}