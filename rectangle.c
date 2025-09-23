//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>  
int main()  
{  
    float length, breadth;  
    float area, perimeter;  

    // Input length and breadth from the user
    printf("Enter length of the rectangle: ");  
    scanf("%f", &length);  
    printf("Enter breadth of the rectangle: ");  
    scanf("%f", &breadth);  

    // Calculate area and perimeter
    area = length * breadth;  
    perimeter = 2 * (length + breadth);  

    // Display the results
    printf("Area=%.2f, Perimeter=%.2f\n", area, perimeter);  

    return 0;  
}