// Question 12:
// Remove duplicates from a sorted array.


#include <stdio.h>

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5};
    int n = 9;

    // Index for placing unique elements
    int j = 0;

    // Traverse the array
    for (int i = 0; i < n; i++)
    {
        // If current element is different from previous unique element
        if (i == 0 || arr[i] != arr[i - 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }

    // Print the array without duplicates
    printf("Array after removing duplicates: ");

    for (int i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}