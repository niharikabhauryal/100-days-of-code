//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main()
{
    int n, i;
    int positive_count = 0, negative_count = 0, zero_count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Count positive, negative, and zero elements in the array
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive_count++; // Increment positive count
        }
        else if (arr[i] < 0)
        {
            negative_count++; // Increment negative count
        }
        else
        {
            zero_count++; // Increment zero count
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", positive_count, negative_count, zero_count); // Print counts

    return 0;
}
