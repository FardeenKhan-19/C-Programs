/*
Experiment 10.1

Title   : WAP TO ADD TWO NUMBERS USING POINTERS

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096

*/

    #include <stdio.h>

    int main()
    {

        //Defining the variables.

        int num1, num2, sum;
        int *ptr1, *ptr2;

        //Taking input from user.

        printf("Enter the first number : ");
        scanf("%d", &num1);

        printf("Enter the second number : ");
        scanf("%d", &num2);

        //Calling pointer to the variable.
        ptr1 = &num1;
        ptr2 = &num2;

        //Calculating the sum.
        sum = *ptr1 + *ptr2;

        printf("The sum of %d and %d is : %d\t\n", *ptr1, *ptr2, sum);

        return 0;
    }


/*
OUTPUT:-

Enter the first number : 69
Enter the second number : 96
The sum of 69 and 96 is : 165

Process returned 0 (0x0)   execution time : 2.529 s
Press any key to continue.

*/
