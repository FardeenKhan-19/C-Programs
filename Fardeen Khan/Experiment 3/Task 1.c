/*

Experiment

Title   : WAP to design a menu driven calculator using switch statement and goto.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096

*/

#include<stdio.h>

int main()
{
    // Declaring the Variables to be used.

    float op1,op2,result;
    char operation;

    printf("\t\t\t\t\t\tWelcome to the Calculator\n");

    //Display the operations.

    printf("Operations You Can Use:\n +: Addition\n -: Subtraction\n *: Multiplication\n /: Division\n %%: Modulus\n");


    // Getting The Input From The User.

    printf("\nEnter the First Operand: ");
    scanf("%f", &op1);

    printf("\nEnter the Second Operand: ");
    scanf("%f", &op2);

    printf("\nEnter the Operation: ");
    scanf(" %c", &operation);

    //Building the logic of the calculator using switch and using goto for looping.

    repeat:

    switch(operation)
    {
        case'+':
            result = op1 + op2;
            printf("%.1f + %.1f = %.1f\n\n", op1,op2,result);
            break;

        case'-':
            result = op1 - op2;
            printf("%.1f - %.1f = %.1f\n\n", op1,op2,result);
            break;

        case'*':
            result = op1 * op2;
            printf("%.1f * %.1f = %.1f\n\n", op1,op2,result);
            break;

        case'/':
            result = op1 / op2;
            printf("%.1f / %.1f = %.1f\n\n", op1,op2,result);
            break;

        case'%':
            printf("%d mod %d = %d\n\n",(int)op1,(int)op2, (int)op1 % (int)op2);
            break;

        default:
            printf("Invalid Operation\n\n");
            break;

        printf("Do You Wish to Continue? Y/N\n");
        scanf(" %c",operation);

        if(operation == 'n')
            printf("");

        goto repeat;

        }

    return 0;
}
/*

Output:



*/
