/*
Q57: Find the sum of array elements.

Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Calculate the sum of array elements
    for (i = 0; i < n; i++)
    {
        sum += arr[i]; // Add each element to sum
    }

    printf("Sum of array elements: %d\n", sum); // Print the sum

    return 0;
}
