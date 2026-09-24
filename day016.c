// Question:
// Chef wants to check whether a password is secure.
//
// Conditions:
// 1. At least one lowercase letter [a-z].
// 2. At least one uppercase letter [A-Z] strictly inside.
// 3. At least one digit [0-9] strictly inside.
// 4. At least one special character from {@, #, %, &, ?} strictly inside.
// 5. Password length must be at least 10 characters.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char password[100];
    int lower = 0, upper = 0, digit = 0, special = 0;

    // Taking password input
    printf("Enter password: ");
    scanf("%s", password);

    int n = strlen(password);

    // Check password length
    if (n < 10)
    {
        printf("NO");
        return 0;
    }

    // Traverse the password
    for (int i = 0; i < n; i++)
    {
        // Check lowercase letter (can be anywhere)
        if (password[i] >= 'a' && password[i] <= 'z')
        {
            lower = 1;
        }

        // Check only characters strictly inside
        if (i > 0 && i < n - 1)
        {
            // Check uppercase letter
            if (password[i] >= 'A' && password[i] <= 'Z')
            {
                upper = 1;
            }

            // Check digit
            if (password[i] >= '0' && password[i] <= '9')
            {
                digit = 1;
            }

            // Check special characters
            if (password[i] == '@' ||
                password[i] == '#' ||
                password[i] == '%' ||
                password[i] == '&' ||
                password[i] == '?')
            {
                special = 1;
            }
        }
    }

    // Check all security conditions
    if (lower && upper && digit && special)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}