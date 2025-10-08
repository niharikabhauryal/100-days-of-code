//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main() {
    int n;
    long long factorial = 1; // Use long long to handle larger factorials

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the factorial of n
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Print the result
    printf("Factorial of %d: %lld\n", n, factorial);

    return 0;
}