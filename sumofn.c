//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>  
int main()  
{  
    int n;  
    int sum = 0;  

    // Input a natural number from the user
    printf("Enter a natural number: ");  
    scanf("%d", &n);  

    // Calculate the sum of the first n natural numbers
    sum = n * (n + 1) / 2;

    // Display the result
    printf("Sum=%d\n", sum);  

    return 0;  
}