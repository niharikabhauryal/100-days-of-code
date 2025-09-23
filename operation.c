//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>  
int main()  
{  
    float num1, num2;  
    float sum, diff, product;  
    float quotient;  

    // Input two numbers from the user
    printf("Enter first number: ");  
    scanf("%f", &num1);  
    printf("Enter second number: ");  
    scanf("%f", &num2);  

    // Calculate sum, difference, product, and quotient
    sum = num1 + num2;  
    diff = num1 - num2;  
    product = num1 * num2;  
    if (num2 != 0)
    {  
        quotient = num1 / num2;  
    } 
    else 
    {  
        printf("Error: Division by zero is not allowed.\n");  
        return 1; // Exit the program with an error code
    }  

    // Display the results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%.2f\n", sum, diff, product, quotient);  

    return 0;  
}