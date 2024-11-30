/*

Experiment 11

Title   : WAP to maintain a simple employee database using file handling.

Name    : Fardeen Firoz Khan

Division: FE D

UIN     : 241P096

*/

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    typedef struct
    {
        int id;
        char name[50];
        float salary;
    } Employee;

    void addEmployee(FILE *file)
    {
        Employee emp;
        printf("-----------------------------------------------------------------\n");
        printf("Enter Employee ID: ");
        scanf("%d", &emp.id);
        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp.name); // Reads input with spaces
        printf("Enter Employee Salary: ");
        scanf("%f", &emp.salary);

        fwrite(&emp, sizeof(Employee), 1, file);
        printf("Employee record added successfully!\n");
        printf("-----------------------------------------------------------------\n");
    }

    void viewEmployees(FILE *file)
    {
        Employee emp;
        rewind(file); // Move file pointer to the start of the file

        printf("-----------------------------------------------------------------\n");
        printf("\nEmployee Records:\n");
        printf("ID\tName\t\t\tSalary\n");
        printf("-----------------------------------------------------------------\n");

        while (fread(&emp, sizeof(Employee), 1, file))
            {
                printf("%d\t%-20s\t%.2f\n", emp.id, emp.name, emp.salary);
            }
        printf("-----------------------------------------------------------------\n");
    }

    void editEmployee(FILE *file)
    {
        Employee emp;
        rewind(file); // Move file pointer to the start of the file
        int id, found = 0;
        long pos;

        printf("-----------------------------------------------------------------\n");
        printf("Enter Employee ID to edit: ");
        scanf("%d", &id);

        while (fread(&emp, sizeof(Employee), 1, file))
            {
                if (emp.id == id)
                {
                    found = 1;
                    pos = ftell(file) - sizeof(Employee);

                    printf("Enter new name: ");
                    scanf(" %[^\n]", emp.name);
                    printf("Enter new salary: ");
                    scanf("%f", &emp.salary);

                    fseek(file, pos, SEEK_SET);
                    fwrite(&emp, sizeof(Employee), 1, file);
                    printf("Employee record updated successfully!\n");
                    break;
                }
            }

        if (!found)
            {
                printf("Employee with ID %d not found.\n", id);
            }
        printf("-----------------------------------------------------------------\n");
    }

    void deleteEmployee(FILE *file)
    {
        Employee emp;
        FILE *tempFile;
        int id, found = 0;

        printf("-----------------------------------------------------------------\n");
        printf("Enter Employee ID to delete: ");
        scanf("%d", &id);

        tempFile = fopen("temp.dat", "wb");
        if (tempFile == NULL)
            {
                printf("Error: Unable to create temporary file.\n");
                return;
            }

        rewind(file); // Ensure pointer starts at beginning
        while (fread(&emp, sizeof(Employee), 1, file))
            {
                if (emp.id == id)
                {
                    found = 1;
                    continue; // Skip writing this record to the temp file
                }
                fwrite(&emp, sizeof(Employee), 1, tempFile);
            }

        fclose(file);
        fclose(tempFile);

        remove("employee_database.txt");
        rename("temp.dat", "employee_database.txt");

        file = fopen("employee_database.txt", "rb+");
        if (file == NULL)
            {
                printf("Error: Unable to reopen the file.\n");
                exit(1);
            }

        if (found)
            {
                printf("Employee record deleted successfully.\n");
            }
        else
            {
                printf("Employee with ID %d not found.\n", id);
            }
        printf("-----------------------------------------------------------------\n");
    }

    int main()
    {
        FILE *file;
        int choice;

        file = fopen("employee_database.txt", "rb+");
        if (file == NULL)
            {
                file = fopen("employee_database.txt", "wb+");
                    if (file == NULL)
                    {
                        printf("Error: Unable to open file.\n");
                        return 1;
                    }
            }
        printf("\t\t\t*****Employee Database System*****\n");

        do
            {
                printf("=================================================================\n");
                printf("\nEmployee Database Menu\n");
                printf("1. Add Employee\n");
                printf("2. View Employees\n");
                printf("3. Edit Employee\n");
                printf("4. Delete Employee\n");
                printf("5. Exit\n");
                printf("\n=================================================================\n");
                printf("\nEnter your choice: ");
                scanf("%d", &choice);

                switch (choice)
                {
                    case 1:
                        addEmployee(file);
                        break;
                    case 2:
                        viewEmployees(file);
                        break;
                    case 3:
                        editEmployee(file);
                        break;
                    case 4:
                        deleteEmployee(file);
                        file = fopen("employee_database.txt", "rb+"); // Reopen to maintain file pointer integrity
                        break;
                    case 5:
                        printf("Exiting the program.\n");
                        break;
                    default:
                        printf("Invalid choice! Please try again.\n");
                }
            } while (choice != 5);

            fclose(file);
        return 0;
    }
/*
Output:-
                        *****Employee Database System*****
=================================================================

Employee Database Menu
1. Add Employee
2. View Employees
3. Edit Employee
4. Delete Employee
5. Exit

=================================================================

Enter your choice: 1
-----------------------------------------------------------------
Enter Employee ID: 1
Enter Employee Name: Franklin
Enter Employee Salary: 40000
Employee record added successfully!
-----------------------------------------------------------------
=================================================================

Employee Database Menu
1. Add Employee
2. View Employees
3. Edit Employee
4. Delete Employee
5. Exit

=================================================================

Enter your choice: 1
-----------------------------------------------------------------
Enter Employee ID: Michael
Enter Employee Name: Enter Employee Salary: 70000
Employee record added successfully!
-----------------------------------------------------------------
=================================================================

Employee Database Menu
1. Add Employee
2. View Employees
3. Edit Employee
4. Delete Employee
5. Exit

=================================================================

Enter your choice: 2
-----------------------------------------------------------------

Employee Records:
ID      Name                    Salary
-----------------------------------------------------------------
1       Franklin                40000.00
0       Michael                 70000.00
-----------------------------------------------------------------
=================================================================

Employee Database Menu
1. Add Employee
2. View Employees
3. Edit Employee
4. Delete Employee
5. Exit

=================================================================

Enter your choice: 3
-----------------------------------------------------------------
Enter Employee ID to edit: 1
Enter new name: Franklin
Enter new salary: 60000
Employee record updated successfully!
-----------------------------------------------------------------
=================================================================

Employee Database Menu
1. Add Employee
2. View Employees
3. Edit Employee
4. Delete Employee
5. Exit

=================================================================

Enter your choice: 2
-----------------------------------------------------------------

Employee Records:
ID      Name                    Salary
-----------------------------------------------------------------
1       Franklin                60000.00
0       Michael                 70000.00
-----------------------------------------------------------------
=================================================================

Employee Database Menu
1. Add Employee
2. View Employees
3. Edit Employee
4. Delete Employee
5. Exit

=================================================================

Enter your choice: 4
-----------------------------------------------------------------
Enter Employee ID to delete: 0
Employee record deleted successfully.
-----------------------------------------------------------------
=================================================================

Employee Database Menu
1. Add Employee
2. View Employees
3. Edit Employee
4. Delete Employee
5. Exit

=================================================================

Enter your choice: 2
-----------------------------------------------------------------

Employee Records:
ID      Name                    Salary
-----------------------------------------------------------------
1       Franklin                60000.00
-----------------------------------------------------------------
=================================================================

Employee Database Menu
1. Add Employee
2. View Employees
3. Edit Employee
4. Delete Employee
5. Exit

=================================================================

Enter your choice: 5
Exiting the program.

Process returned 0 (0x0)   execution time : 82.659 s
Press any key to continue.
*/
