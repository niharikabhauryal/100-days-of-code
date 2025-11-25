//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main()
{
    int n, i, element;

    // Read size of the sorted array
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Declare array of size n+1 to accommodate the new element

    // Read elements of the sorted array
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Read the element to be inserted
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the appropriate position to insert the new element
    int pos = 0;
    while (pos < n && arr[pos] < element)
    {
        pos++;
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the found position
    arr[pos] = element;

    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}