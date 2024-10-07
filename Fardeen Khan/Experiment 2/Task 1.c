/*

Experiment 2.1

Title   : WAP to find if entered number is even or odd..

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096

*/

#include<stdio.h>

int main()
{
    int a;

    printf("\t\t\t\t***Program to check if the entered number is odd or even***\n");

    //Taking the input

    printf("\nEnter the number:\t");
    scanf("%d",&a);

    // Verifying the Number

    if(a%2==0)
    {
      printf("\n%d is an Even Number.\n",a);

    }
    else
    {
      printf("\n%d is an Odd Number.\n",a);
    }

    return 0;
}
/*

Output:
                                ***Program to check if the entered number is odd or even***

Enter the number:       8

8 is an Even Number.

Process returned 0 (0x0)   execution time : 2.475 s
Press any key to continue.

*/
