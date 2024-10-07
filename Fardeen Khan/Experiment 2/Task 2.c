/*

Experiment 2.2

Title   : WAP to find the sum of all the odd numbers between numbers entered by the user.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096

*/

#include<stdio.h>

int main()
{
    int a,b,sum=0;

    printf("Enter the First Number :\t");

    scanf("%d",&a);

    printf("\nEnter the Final Number :\t");

    scanf("%d",&b);


    for(int i =a; i<=b; i++)
    {

        if(i%2==1)

        {
            sum=sum+i;
        }

    }

   printf("\n\nThe sum of all the odd Numbers between %d and %d is: %d\n\n",a,b,sum);


    return 0;
}
/*

Output:

Enter the First Number :        1

Enter the Final Number :        9


The sum of all the odd Numbers between 1 and 9 is: 25


Process returned 0 (0x0)   execution time : 4.337 s
Press any key to continue.


*/
