/*
Experiment 7.2

Title   : WAP to calculate sum of two matrix.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096
*/
    #include <stdio.h>

    int main()
    {
        int matrix1[9][9], matrix2[9][9], result[9][9];
        int row, col;

        // Input dimensions.

        printf("Enter number of rows: ");
        scanf("%d", &row);
        printf("Enter number of columns: ");
        scanf("%d", &col);

        // Input matrix 1.

        printf("Enter elements of Matrix 1:\n");
        for (int i = 0; i < row; i++)
            {
            for (int j = 0; j < col; j++)
                {
                    scanf("%d", &matrix1[i][j]);
                }
            }

        // Input matrix 2.

        printf("Enter elements of Matrix 2:\n");
        for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    scanf("%d", &matrix2[i][j]);
                }
            }

        // Add matrices.

        for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }

        // Print Matrix 1.

        printf("Matrix 1:\n");
        for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    printf("%d ", matrix1[i][j]);
                }
                printf("\n");
            }

        // Print Matrix .

        printf("Matrix 2:\n");
        for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    printf("%d ", matrix2[i][j]);
                }
                printf("\n");
            }

        // Print the result.

        printf("Result (Matrix 1 + Matrix 2):\n");
        for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    printf("%d ", result[i][j]);
                }
            printf("\n");
            }

        return 0;
    }

/* OUTPUT:

Enter number of rows: 3
Enter number of columns: 3
Enter elements of Matrix 1:
1
4
7
2
5
8
3
6
9
Enter elements of Matrix 2:
1
2
3
4
5
6
7
8
9
Matrix 1:
1 4 7
2 5 8
3 6 9
Matrix 2:
1 2 3
4 5 6
7 8 9
Result (Matrix 1 + Matrix 2):
2 6 10
6 10 14
10 14 18

Process returned 0 (0x0)   execution time : 37.362 s
Press any key to continue.

*/
