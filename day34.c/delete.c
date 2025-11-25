//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main()
{
    int n, i, element, found_index = -1;

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

    // Read the element to be deleted
    printf("Enter the element to delete: ");
    scanf("%d", &element);

    // Find the index of the element to be deleted
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            found_index = i; // Element found at index i
            break; // Exit the loop once found
        }
    }

    // If element is found, delete it by shifting elements
    if (found_index != -1)
    {
        for (i = found_index; i < n - 1; i++)
        {
            arr[i] = arr[i + 1]; // Shift elements to the left
        }
        n--; // Reduce the size of the array
    }

    // Print the updated array
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}