// Question 17:
// Given a string s, find the length of the longest substring
// without duplicate characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "abcabcbb";

    int n = strlen(s);
    int maxLength = 0;

    // Traverse the string from every starting position
    for (int i = 0; i < n; i++)
    {
        int visited[256] = {0};
        int length = 0;

        // Check characters from the current position
        for (int j = i; j < n; j++)
        {
            // If character is already present, stop
            if (visited[(unsigned char)s[j]] == 1)
            {
                break;
            }

            // Mark character as visited
            visited[(unsigned char)s[j]] = 1;

            // Increase substring length
            length++;
        }

        // Update maximum length
        if (length > maxLength)
        {
            maxLength = length;
        }
    }

    // Print the longest substring length
    printf("Length of longest substring = %d", maxLength);

    return 0;
}