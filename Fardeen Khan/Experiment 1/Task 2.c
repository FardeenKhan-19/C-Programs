/*

Experiment 1

Title:  WAP to get students PCM marks from the user and find the average.
        Use conditional operator to print if the student is eligible for admission.
        Eligibility criteria is 50% in PCM.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096

*/
#include<stdio.h>

int main()
{
    int physics,chemistry,maths;
    float avg;


    printf("Enter the Marks for Physics:\t");
    scanf("%d",&physics);


    printf("Enter the Marks for Chemistry:\t");
    scanf("%d",&chemistry);


    printf("Enter the Marks for Maths:\t");
    scanf("%d",&maths);

    avg=(physics+chemistry+maths)/3;


    printf("\nYour Average Is : %f",avg);


    avg>=50 ? printf("\nYou are Eligible"):printf("\nYou are not Eligible");

    return 0;
}
/*

Output:

Enter the Marks for Physics:    60
Enter the Marks for Chemistry:  80
Enter the Marks for Maths:      30

Your Average Is : 56.000000
You are Eligible



*/
