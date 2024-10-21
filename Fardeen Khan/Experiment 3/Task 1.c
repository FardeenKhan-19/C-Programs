/*

Experiment 3

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

    repeat:

    printf("\nEnter the First Operand: ");
    scanf("%f", &op1);

    printf("\nEnter the Second Operand: ");
    scanf("%f", &op2);

    printf("\nEnter the Operation: ");
    scanf(" %c", &operation);

    //Building the logic of the calculator using switch.

    switch(operation)
    {
        case'+':
            result = op1 + op2;
            printf("\n%.1f + %.1f = %.1f\n\n", op1,op2,result);
            break;

        case'-':
            result = op1 - op2;
            printf("%\n.1f - %.1f = %.1f\n\n", op1,op2,result);
            break;

        case'*':
            result = op1 * op2;
            printf("\n%.1f * %.1f = %.1f\n\n", op1,op2,result);
            break;

        case'/':
            result = op1 / op2;
            printf("%\n.1f / %.1f = %.1f\n\n", op1,op2,result);
            break;

        case'%':
            printf("\n%d mod %d = %d\n\n",(int)op1,(int)op2, (int)op1 % (int)op2);
            break;

        default:
            printf("\nInvalid Operation\n\n");
            break;

    }

    // Asking the user if they wish to continue or not.

    printf("Do You Wish to Continue? Y/N\n");
    scanf(" %c",&operation);

    if(operation == 'n')
    {
    printf("\nThank You For Using the Calculator!!!!");
    return;
    }

    // Using Goto for looping the Program.

    goto repeat;

    return 0;
}
/*

Output:
                                                Welcome to the Calculator
Operations You Can Use:
 +: Addition
 -: Subtraction
 *: Multiplication
 /: Division
 %: Modulus

Enter the First Operand: 60

Enter the Second Operand: 9

Enter the Operation: +

60.0 + 9.0 = 69.0

Do You Wish to Continue? Y/N
y

Enter the First Operand: 12

Enter the Second Operand: 12

Enter the Operation: *

12.0 * 12.0 = 144.0

Do You Wish to Continue? Y/N
n

Thank You For Using the Calculator!!!!


*/
