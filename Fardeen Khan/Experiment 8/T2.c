/*
Experiment 8.1

Title   :WAP to check if the entered string is palindrome or not.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096
*/

    #include <stdio.h>
    #include <string.h>

    void reverseString(char src[], char dest[])
    {
        int len = strlen(src);
        for (int i = 0; i < len; i++)
            {
                dest[i] = src[len - i - 1];
            }
        dest[len] = '\0';  // Null-terminate the reversed string
    }

    int main()
    {
        char input[100], reversed[100];

        // Input from the user.

        printf("Please enter a string: ");
        fgets(input, sizeof(input), stdin);

        // Remove the newline character.

        input[strcspn(input, "\n")] = '\0';

        // Reverse the input string.

        reverseString(input, reversed);

        // Check if the original and reversed strings match.

        if (strcmp(input, reversed) == 0)
            {
                printf("\nThe Entered string is a palindrome.\n");
            }
        else
            {
                printf("\nThe Entered string is not a palindrome.\n");
            }

        return 0;
    }

/* OUTPUT:

Please enter a string: CIVIC

The Entered string is a palindrome.

Process returned 0 (0x0)   execution time : 11.045 s
Press any key to continue.
*/
