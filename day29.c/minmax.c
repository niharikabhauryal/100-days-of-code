/*
Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10


*/
#include <stdio.h>
int main()
{
    int n, i;
    int max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Initialize max and min with the first element of the array
    max = arr[0];
    min = arr[0];

    // Find the maximum and minimum elements in the array
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; // Update max if current element is greater
        }
        if (arr[i] < min)
        {
            min = arr[i]; // Update min if current element is smaller
        }
    }

    printf("Max=%d, Min=%d\n", max, min); // Print the maximum and minimum elements

    return 0;
}