//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main()
{
    int n, i, k;

    // Read size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Read elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Read number of positions to rotate
    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);

    // Normalize k to avoid unnecessary rotations
    k = k % n;

    // Rotate the array to the right by k positions
    int rotated[n];
    for (i = 0; i < n; i++)
    {
        rotated[(i + k) % n] = arr[i]; // Calculate new position for each element
    }

    // Print the rotated array
    printf("Array after rotation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}