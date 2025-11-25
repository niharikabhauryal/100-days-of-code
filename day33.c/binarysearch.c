//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main()
{
    int n, i, target;
    
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target); // Read the target element to search for

    // Perform binary search
    int left = 0, right = n - 1;
    int found_index = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2; // Calculate mid index

        if (arr[mid] == target)
        {
            found_index = mid; // Element found at index mid
            break; // Exit the loop once found
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // Search in the right half
        }
        else
        {
            right = mid - 1; // Search in the left half
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