// Question 14:
// Given two arrays arr1 and arr2, your task is to find out
// the smallest difference between two array elements.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[] = {1, 5, 9, 13};
    int arr2[] = {4, 8, 12, 15};

    int m = 4, n = 4;
    int minDiff = 999999;

    // Compare every element of arr1 with every element of arr2
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int diff = abs(arr1[i] - arr2[j]);

            // Update minimum difference
            if (diff < minDiff)
            {
                minDiff = diff;
            }
        }
    }

    // Print the smallest difference
    printf("Smallest difference = %d\n", minDiff);

    return 0;
}