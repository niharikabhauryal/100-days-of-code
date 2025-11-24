/*
Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5


*/
#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    printf("The elements in the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // Print each element of the array
    }
    printf("\n"); // New line after printing all elements

    return 0;
}