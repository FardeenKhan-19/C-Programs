/*
Experiment 9

Title   :   Design a  Structure student_record to contain name, roll_number and total marks obtained.
            WAP to read 5 students data from the user and then display the topper on the screen.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096

*/

    #include<stdio.h>

    // Declaring the structure.

    struct StudentRecord
    {
        char name[25];
        int roll_no;
        int totalMarks;
    };

    int main()
    {
        int topper=0,index=0;
        struct StudentRecord stud[3];

        //reading data.

        for(int i=0; i<3; i++)
        {
            printf("\nEnter Data for student:%d", i+1);

            printf("\nEnter Name:");

            gets(stud[i].name);

            printf("\nEnter Roll No:");

            scanf("%d",&stud[i].roll_no);

            printf("\nEnter Total Marks:");

            scanf("%d",&stud[i].totalMarks);

            //Logic for finding the topper.

            if(stud[i].totalMarks>topper)
            {
                topper=stud[i].totalMarks;
                index=i;
            }

            getchar();
        }

        //printing details of topper.

        printf("\n\n The Details of Topper are:\n\n");
        printf("Name :\t %s",stud[index].name);
        printf("\nRoll No : %d",stud[index].roll_no);
        printf("\nMarks :\t %d",stud[index].totalMarks);

        return 0;

    }
/*
OUTPUT:-

Enter Data for student:1
Enter Name:Harry

Enter Roll No:20

Enter Total Marks:96

Enter Data for student:2
Enter Name:Hermione

Enter Roll No:21

Enter Total Marks:99

Enter Data for student:3
Enter Name:Ron

Enter Roll No:23

Enter Total Marks:69


 The Details of Topper are:

Name :   Hermione
Roll No : 21
Marks :  99
Process returned 0 (0x0)   execution time : 62.349 s
Press any key to continue.


*/
