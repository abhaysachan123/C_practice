// Question 9: Rotate Array

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;

    // Rotate the array k times
    for (int r = 0; r < k; r++)
    {
        // Store the last element
        int last = arr[n - 1];

        // Shift elements one position to the right
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        // Put the last element at the beginning
        arr[0] = last;
    }

    // Print the rotated array
    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}