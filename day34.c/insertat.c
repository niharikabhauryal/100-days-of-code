//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main()
{
    int n, i, position, element;

    // Read size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Declare array of size n+1 to accommodate the new element

    // Read elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Read the position and element to be inserted
    printf("Enter the position and element to insert: ");
    scanf("%d %d", &position, &element);

    // Validate position
    if (position < 0 || position > n)
    {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}