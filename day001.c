// Day1:  Write a C program that accepts a positive integer containing digits from 0 to 9. Exactly one digit is missing, while the remaining nine digits appear exactly once. 
// Input : 854102967
// Output:  3

#include <stdio.h>

int main() {
    int n, digit, sum = 0;
    scanf("%d",&n);

    while ( n > 0 ) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("%d", 45 - sum);

    return 0;
    
}