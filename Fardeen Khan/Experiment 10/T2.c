/*
Experiment 10.2

Title   : WAP TO PRINT THE ELEMENTS OF AN ARRAY IN REVERSE ORDER USING POINTERS.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096

*/

    #include <stdio.h>

    int main()
    {
        //size of array

        int n;

        printf("Enter the number of elements to be stored in the array: ");

        scanf("%d", &n);

        int arr[n];  //Declaring Array


        //Taking input for elements of array.

        printf("\nEnter the elements of the array:\n");

        for (int i = 0; i < n; i++)
        {

            scanf("%d", &arr[i]);
        }

        // last element of the array
        int *ptr = arr + n - 1;

        printf("\nArray elements in reverse order:\n");

        //Arranging the array in reverse using the pointer
        for (int i = 0; i < n; i++)
        {

            printf("%d ", *ptr);

            ptr--;/*decreasing the pointer
                  to go to the previous element*/
        }

        return 0;

    }


/*
OUTPUT:-

Enter the number of elements to be stores in the array: 7

Enter the elements of the array:
9 6 3 8 5 2 7

Array elements in reverse order:
7 2 5 8 3 6 9
Process returned 0 (0x0)   execution time : 13.770 s
Press any key to continue.

*/

