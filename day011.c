// Question 11:
// Square every element of an array and return the elements sorted,
// without sorting again.
//
// Input:  -4 -3 -5 1 2 3
// Output: 1 4 9 9 16 25

#include <stdio.h>

int main()
{
    int arr[] = {-4, -3, -5, 1, 2, 3};
    int n = 6;

    int result[6];
    int used[6] = {0};

    // Find the largest square and place it from right to left
    for (int pos = n - 1; pos >= 0; pos--)
    {
        int maxIndex = -1;
        int maxSquare = -1;

        // Find the largest unused squared element
        for (int i = 0; i < n; i++)
        {
            int square = arr[i] * arr[i];

            if (used[i] == 0 && square > maxSquare)
            {
                maxSquare = square;
                maxIndex = i;
            }
        }

        // Store the largest square in the current position
        result[pos] = maxSquare;

        // Mark the element as used
        used[maxIndex] = 1;
    }

    // Print the sorted squared array
    printf("Output: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}