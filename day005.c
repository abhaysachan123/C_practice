// Day 5 question:
// Input a number from the user and print
// a. Number of 1 and number of 0 in its binary representation.
// b. Number of consecutive 1 in the binary representation.
// Input:  [1,1,0,1,1,1]
// Output:  a   5 and 1
// b 3

#include <stdio.h>

int main() {
    int arr[] = {1, 1, 0, 1, 1, 1};
    int n = 6;

    int ones = 0, zeros = 0;
    int current = 0, longest = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            ones++;
            current++;

            if (current > longest)
                longest = current;
        } else {
            zeros++;
            current = 0;
        }
    }

    printf("a. Number of 1 = %d\n", ones);
    printf("   Number of 0 = %d\n", zeros);
    printf("b. Consecutive 1 = %d\n", longest);

    return 0;
}