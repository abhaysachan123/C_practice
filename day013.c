// Question 13:
// Given two sorted arrays nums1 and nums2 of size m and n respectively,
// return the median of the two sorted arrays.
//
// Example:
// nums1 = [1, 3]
// nums2 = [2]
//
// Output: 2.0

#include <stdio.h>

int main()
{
    int nums1[] = {1, 3};
    int nums2[] = {2};

    int m = 2;
    int n = 1;

    int merged[10];
    int i = 0, j = 0, k = 0;

    // Merge the two sorted arrays
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            merged[k] = nums1[i];
            i++;
        }
        else
        {
            merged[k] = nums2[j];
            j++;
        }

        k++;
    }

    // Add remaining elements of nums1
    while (i < m)
    {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    // Add remaining elements of nums2
    while (j < n)
    {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    int total = m + n;
    double median;

    // If total number of elements is odd
    if (total % 2 != 0)
    {
        median = merged[total / 2];
    }
    // If total number of elements is even
    else
    {
        median = (merged[total / 2 - 1] + merged[total / 2]) / 2.0;
    }

    printf("Median = %.2f\n", median);

    return 0;
}