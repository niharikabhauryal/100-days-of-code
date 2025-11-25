//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
int main()
{
    int n, i, target, found_index = -1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target); // Read the target element to search for

    // Perform linear search
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found_index = i; // Element found at index i
            break; // Exit the loop once found
        }
    }

    // Print the result
    if (found_index != -1)
    {
        printf("Found at index %d\n", found_index);
    }
    else
    {
        printf("-1\n"); // Element not found
    }

    return 0;
}
