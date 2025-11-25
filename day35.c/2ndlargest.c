//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main()
{
    int n, i;
    int largest, second_largest;

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

    // Initialize largest and second largest
    largest = second_largest = -2147483648; // Minimum possible integer value

    // Find the largest and second largest elements
    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest; // Update second largest
            largest = arr[i];         // Update largest
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i]; // Update second largest
        }
    }

    // Print the second largest element
    if (second_largest == -2147483648)
    {
        printf("No second largest element found.\n");
    }
    else
    {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}