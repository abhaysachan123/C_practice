// Question 8:
// Given an m × n matrix, return all elements of the matrix in spiral order.
//
// Input:
// [
//  [1,  2,  3,  4],
//  [5,  6,  7,  8],
//  [9, 10, 11, 12]
// ]
//
// Output:
// [1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7]

#include <stdio.h>

int main()
{
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int m = 3, n = 4;

    // Define the four boundaries of the matrix
    int top = 0;
    int bottom = m - 1;
    int left = 0;
    int right = n - 1;

    printf("Spiral Order: [");

    // Continue until all elements are printed
    while (top <= bottom && left <= right)
    {
        // Traverse from left to right
        for (int j = left; j <= right; j++)
            printf("%d ", matrix[top][j]);

        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);

        right--;

        // Traverse from right to left
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
                printf("%d ", matrix[bottom][j]);

            bottom--;
        }

        // Traverse from bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);

            left++;
        }
    }

    printf("]");

    return 0;
}