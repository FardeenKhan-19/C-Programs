/*

Experiment 4

Title   : WAP to find all the prime numbers between two numbers.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096

*/

#include <stdio.h>

// Declaring function to check if a number is prime.

int isPrime(int x)
{
    for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                return 0;
            }
        }
    return 1;
}

int main()
{
    // Declaring the variables.

    int num1, num2;

    // Taking input from the user.

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    printf("The prime numbers between %d and %d are:  ", num1, num2);

    // Calling the Function.

    for (int i = num1; i <= num2; i++)
        {
            if (isPrime(i) == 1) {
                printf("%d ", i);
        }
    }
    return 0;
}


/*

Output:

Enter two numbers : 1 69
The prime numbers between 1 and 69 are: 1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67
Process returned 0 (0x0)   execution time : 2.891 s
Press any key to continue.


*/
