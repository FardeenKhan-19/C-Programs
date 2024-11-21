/*
Experiment 7.1

Title   : WAP to find the largest element in an array.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096
*/

    #include <stdio.h>

    int main()
    {
        int n, i, max;
        // Getting the number of elements in the array.

        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);
        int array[n];
        // Get the elements of the array.

        printf("\nEnter the elements of the array:\n");
        for(i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }
        // Assume the first element is the largest.

        max = array[0];

        // Loop through the array to find the largest element.

        for(i = 1; i < n; i++)
        {
            if(array[i] > max)
            {
                max = array[i];
            }
        }
        // Print the largest element.

        printf("\nThe largest element in the array is: %d\n", max);

        return 0;
    }

/* OUTPUT
Enter the number of elements in the array: 7

Enter the elements of the array:
12
15
75
96
69
54
100

The largest element in the array is: 100

Process returned 0 (0x0)   execution time : 18.106 s
Press any key to continue.
*/
