//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main() {
    int num1, num2, max, lcm;

    // Input the two numbers
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Find the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Calculate LCM
    for(int i = max;i <= (num1 * num2); i=i+max)
  {
        if (i % num1 == 0 && i % num2 == 0) 
        {
            lcm = i;
            break;
        }
        
    }

    // Print the result
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
