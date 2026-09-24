// Question 10

#include <stdio.h>

int main()
{
    int n = 5;

    // Loop for rows
    for (int i = 1; i <= n; i++)
    {
        // Loop for columns
        for (int j = 1; j <= n; j++)
        {
            // Print star on boundary
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("*");
            }
            else
            {
                // Print space inside the square
                printf(" ");
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}