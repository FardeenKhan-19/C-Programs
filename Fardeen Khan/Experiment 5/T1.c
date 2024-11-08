/*

Experiment 5.1

Title   : WAP to Find a factorial of Number using 3 Iterative Function.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096

*/

    #include<stdio.h>

    // Declaring Factorial function.

    int CalcFact(int a)
    {
        int fact=1;

        // Buildiing the Logic for Calculating factorial.

        for(int i=1; i<=a; i++ )

        {
            fact=fact*i;
        }

        return fact;
    }

    int main()
    {

        int x,result;

        printf("\t\t\t\t\tTo Find Factorial of a Number\n\n");

        printf("Enter a Number: ");

        scanf("%d", &x);

        // To Check if entered no. (x) > 0 else showing error.

        if ( x > 0 )
        {

            // Calling The Function.

            result = CalcFact( x );

            printf("\nThe Factorial of %d is %d \n",x,result);

            printf("\nTHANK YOU!!\n");

        }
        else

        printf("\nERROR : Enter a Real Number.\n");

        return 0;

    }

/*

OUTPUT:

                                        To Find Factorial of a Number

Enter a Number:7

The Factorial of 7 is 5040

THANK YOU!!


*/
