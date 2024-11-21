/*
Experiment 8.1

Title   : WAP to find the length of a string without using library function.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096
*/

    #include <stdio.h>

    int main()
    {
        char str[100];
        int idx = 0, totalLength = 0;

        // Display a message.

        printf("\t\t\t\t\t*** Find the length of a string ***\n\n");

        // Asking the user to enter a string.

        printf("Please enter a string: ");

        // Use fgets instead of gets for safer input.

        fgets(str, sizeof(str), stdin);

        // Traverse through each character until null character is found using 'while' loop.

        while (str[idx] != '\0' && str[idx] != '\n')
            {
                totalLength++;  // Increment length for each character
                idx++;          // Move to the next character
            }

        // Output the total length of the string.

        printf("The total length of the string is: %d\n", totalLength);

        return 0;
    }

/* OUTPUT:

                                        *** Find the length of a string ***

Please enter a string: Hello there! In this program, we learnt to find the length of the entered string without using string library.
The total length of the string is: 99

Process returned 0 (0x0)   execution time : 123.900 s
Press any key to continue.

*/
