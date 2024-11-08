/*

Experiment 5.2

Title   : WAP to Find a factorial of Number using Recursive Function.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096

*/

        #include<stdio.h>

        // Declaring Factorial function.

        int CalcFact(int a)
        {

        // Buildiing the Logic for Calculating factorial.

            if (a==0 || a==1)
            {

                return 1;

            }

            else

        // Recursive case.

            return a*CalcFact(a-1);

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
Output:

                                        To Find Factorial of a Number

Enter a Number: 15

The Factorial of 15 is 2004310016

THANK YOU!!


*/

